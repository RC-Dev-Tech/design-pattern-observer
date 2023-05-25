/*
 * Design Pattern - Observer 觀察者模式
 * 
 * 在這個範例中，Subject（主題）負責管理一個觀察者列表，並具有Attach（附加）、Detach（分離）和Notify（通知）方法。
 * ConcreteSubject（具體主題）是Subject的子類，負責在狀態改變時通知觀察者。
 * Observer（觀察者）定義了一個Update（更新）方法，該方法在觀察到主題的變化時被調用。
 * ConcreteObserver（具體觀察者）是Observer的子類，實現了Update方法。
 * 
 * 在客戶端中，我們創建了一個具體主題（ConcreteSubject）和兩個具體觀察者（ConcreteObserver）。
 * 然後，我們將觀察者附加到主題上，觸發主題的動作（DoSomething），並觀察觀察者是否收到了通知。
 * 接著，我們分離了一個觀察者，再次觸發主題的動作，確保只有一個觀察者收到通知。
 */

#include <iostream>
#include <vector>

// Observer
class Observer {
public:
    virtual void Update() = 0;
};

// ConcreteObserver
class ConcreteObserver : public Observer {
public:
    void Update() override {
        std::cout << "ConcreteObserver received update." << std::endl;
    }
};

// Subject
class Subject {
private:
    std::vector<Observer*> observers;

public:
    void Attach(Observer* observer) {
        observers.push_back(observer);
    }

    void Detach(Observer* observer) {
        auto it = std::find(observers.begin(), observers.end(), observer);
        if (it != observers.end()) {
            observers.erase(it);
        }
    }

    void Notify() {
        for (Observer* observer : observers) {
            observer->Update();
        }
    }
};

// ConcreteSubject
class ConcreteSubject : public Subject {
public:
    void DoSomething() {
        std::cout << "ConcreteSubject is doing something." << std::endl;
        Notify(); // Notify observers when something happens
    }
};

int main() {
    ConcreteSubject subject;
    ConcreteObserver observer1;
    ConcreteObserver observer2;

    subject.Attach(&observer1);
    subject.Attach(&observer2);

    subject.DoSomething(); // Trigger the subject's action, which will notify the observers

    subject.Detach(&observer2); // Detach one observer

    subject.DoSomething(); // Trigger the subject's action again

    return 0;
}

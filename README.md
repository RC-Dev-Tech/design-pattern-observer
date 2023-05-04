# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Observer 觀察者模式
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---
<br>

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---
<br>

## 目的
觀察者模式（Observer Pattern）用於當一個物件的狀態發生變化時，<br>
所有依賴該物件的物件都能夠接收到通知並進行相應的操作，以達到解耦的目的。

---
<br>

## 使用時機
當需要實現一個事件驅動系統時，使用觀察者模式是非常有用的。<br>
例如，當一個對象的狀態改變需要通知其他對象時，可以使用觀察者模式。

---
<br>

## URL結構圖
![](https://drive.google.com/uc?id=1AVk-uiMRGs7qVXCDNINbrcY4VW6pYDr7)
> 圖片來源：[Refactoring.Guru - Observer](https://refactoring.guru/design-patterns/observer)

---
<br>

## 實作成員
* Subject（主題）：
  * 管理一個觀察者列表，以及通知觀察者的方法。
* ConcreteSubject（具體主題）：
  * 實現Subject接口，存儲狀態並在狀態改變時通知觀察者。
* Observer（觀察者）：
  * 定義接收通知並進行相應操作的接口。
* ConcreteObserver（具體觀察者）：
  * 實現Observer接口，存儲指向Subject對象的引用，以便可以接收通知並進行相應操作。

---
<br>

## 實作範例:
- [待補...]() 

---
<br>

## 參考資料
* [Wiki - Observer Pattern](https://en.wikipedia.org/wiki/Observer_pattern) <br>
* [Refactoring.Guru - Observer](https://refactoring.guru/design-patterns/observer) <br>

---
<br>

---
<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---

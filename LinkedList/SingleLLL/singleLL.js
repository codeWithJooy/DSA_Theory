class Node {
  constructor(val) {
    this.data = val;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }
  addAtStart(data) {
    let newNode = new Node(data);
    newNode.next = this.head;
    this.head = newNode;
  }

  printLinkedList() {
    let current = this.head;
    while (current) {
      console.log(current.data);
      current = current.next;
    }
  }
}

let head = new LinkedList();
head.addAtStart(10);
head.addAtStart(20);
head.printLinkedList();

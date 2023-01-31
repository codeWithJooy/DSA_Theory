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
  /* Add Data at the Beginning */
  addAtStart(data) {
    let newNode = new Node(data);
    newNode.next = this.head;
    this.head = newNode;
  }
  /* Add Data at The End */
  addAtEnd(data) {
    let newNode = new Node(data);
    let current = this.head;
    while (current.next != null) {
      current = current.next;
    }
    current.next = newNode;
  }

  /* Delere Data from the Start */
  deleteFromStart() {
    if (this.head) {
      let temp = this.head;
      this.head = temp.next;
      return;
    }
    console.log("List is empty");
    return;
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
head.deleteFromStart();
head.addAtStart(20);
head.addAtStart(10);
head.addAtEnd(30);
head.addAtEnd(40);
head.deleteFromStart();
head.printLinkedList();

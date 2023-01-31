let head;

class Node {
  constructor(val) {
    this.data = val;
    this.next = null;
  }
}

function printList(head) {
  while (head != null) {
    console.log(head.data);
    head = head.next;
  }
}

head = new Node(1);
let second = new Node(2);
let third = new Node(3);

head.next = second;
second.next = third;

printList(head);

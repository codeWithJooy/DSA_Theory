let head;

class Node{
    constructor(val){
        this.data=val
        this.next=null
    }
}

function printList(){
   let n = head
   while(n!=null){
       console.log(n.data)
       n=n.next
   }
}
    
head=new Node(1)
let second=new Node(2)
let third=new Node(3)

head.next=second
second.next=third

printList()




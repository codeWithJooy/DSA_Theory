class Stack:
    def __init__(self,MAX):
        self.stack=[]
        self.top=-1
        self.size=MAX

    def isEmpty(self):
        return self.top == -1

    def isFull(self):
        return self.top == self.size-1
    
    def push(self,element):
        if(not self.isFull()):
            self.top=self.top+1
            self.stack.append(element)
            print("Item Added is ",element)
        else:
            print("Stack is Full")    

    def pop(self):
        if(not self.isEmpty()):
            print("Item Removed is ",self.stack.pop())
            self.top=self.top-1
        else:
            print("Stack is Empty")      

    def printStack(self):
        for i in range(self.top+1):
            print(self.stack[i]," ")


stack=Stack(5)
stack.push(10)
stack.push(20)
stack.push(30)
stack.printStack()
stack.push(40)
stack.push(50)
stack.pop()
stack.printStack()

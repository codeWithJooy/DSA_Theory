const factorial=(num)=>{
   if(num < 1)
    return 1
   else 
    return num * factorial(num-1)   
}

let number=5
console.log(factorial(number))


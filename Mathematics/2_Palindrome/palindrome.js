const palindrome=(num)=>{
//Step1 Reverse the number
    let rev=0
    let duplicate=num
    while(duplicate){
      rev=rev*10+duplicate%10
      duplicate=Math.floor(duplicate/10)
    }
    return num==rev
}
let number=12321
console.log(palindrome(number))
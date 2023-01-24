const countDigit=(num)=>{
  let count=0
  while(num){
      num=Math.floor(num/10)
      ++count
  }
  return count
}

let number=123456
console.log(`Total Digits are ${countDigit(number)}`)
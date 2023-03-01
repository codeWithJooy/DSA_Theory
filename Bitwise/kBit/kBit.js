/* n represents number of bits and k represents the bit to check  */
const isKBitSetMethod1 = (n, k) => {
  if ((n & (1 << (k - 1))) > 0) {
    return true;
  }
  return false;
};

const isKBitSetMethod2 = (n, k) => {
  if (((n >> (k - 1)) & 1) > 0) {
    return true;
  }
  return false;
};
console.log(isKBitSetMethod2(5, 2));

function primeFactors(n) {
    const factors = [];
  
    // Handle the case of dividing by 2 repeatedly
    while (n % 2 === 0) {
      factors.push(2);
      n /= 2;
    }
  
    // Check for odd prime factors starting from 3
    for (let i = 3; i <= Math.sqrt(n); i += 2) {
      while (n % i === 0) {
        factors.push(i);
        n /= i;
      }
    }
  
    // If n becomes a prime greater than 2, add it to the factors
    if (n > 2) {
      factors.push(n);
    }
  
    return factors;
  }
  
  const numberToFactor = 196;
  const factors = primeFactors(numberToFactor);
  console.log(`Prime factors of ${numberToFactor} are: ${factors}`);
  
const n = 2 * 1e5, q = 2 * 1e5;

const numbers = Array(n).fill().map((_, index) => index);
const queries = Array(q).fill().map(() => `1 ${n}`)
console.log(`${n} ${q}`)
console.log(numbers.join(" "))
console.log(queries.join("\n"))

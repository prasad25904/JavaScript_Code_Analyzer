function add(x, y) {
  let result = x + y;
  return result;
}
function main() {
  var sum = add(5, 3);

  if (sum > 2) {
    let msg = "High";
  } else {
    let msg = "Low";
  }

  while (sum < 10) {
    sum = sum + 1;
  }

}

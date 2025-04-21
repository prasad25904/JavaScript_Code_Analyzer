function processData() {
  var name = "Prasad";
  let age = 22;
  const isStudent = true;

  const user = {
    username: name,
    age: age,
    active: isStudent,
    scores: [90, 85, 88],
    address: {
      city: "Pune",
      pincode: 411001
    }
  };

  const mixedArray = [42, "hello", true, { key: "value" }, [1, 2, 3]];

  console.log("User Info:", user);
  console.log("Mixed Array:", mixedArray);
}



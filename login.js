// login.js
document.getElementById("login-form").addEventListener("submit", function (event) {
  event.preventDefault();

  let password = document.querySelector("#password").value;

  const hasUpperCase = /[A-Z]/.test(password);
  const hasLowerCase = /[a-z]/.test(password);
  const hasSpecialChar = /[@,#,%,$]/.test(password);
  const isCorrectLength = password.length >= 8;

  if (!hasUpperCase || !hasLowerCase || !hasSpecialChar || !isCorrectLength) {
    document.querySelector("#errorpassword").innerHTML = "Password must contain upper case, lower case, special characters, and be at least 8 characters long.";
    document.querySelector("#password").style.border = "2px solid red";
    alert("Incorrect password format.");
  } else {
    document.querySelector("#errorpassword").innerHTML = "";
    document.querySelector("#password").style.border = "2px solid black";
    alert("Password is valid.");
    window.location.href = "admin.html";
  }
});

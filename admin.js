// Set light mode
document.getElementById('light-mode-btn').addEventListener('click', function () {
  document.body.classList.add('light-mode');
  document.body.classList.remove('dark-mode');

  // Save the mode in local storage
  localStorage.setItem('mode', 'light');
});

// Set dark mode
document.getElementById('dark-mode-btn').addEventListener('click', function () {
  document.body.classList.add('dark-mode');
  document.body.classList.remove('light-mode');

  // Save the mode in local storage
  localStorage.setItem('mode', 'dark');
});



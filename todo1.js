// todo1.js
export function createTodoItem(text) {
  const li = document.createElement('li');
  li.textContent = text;
  li.addEventListener('click', () => {
    li.classList.toggle('completed');
  });
  return li;
}

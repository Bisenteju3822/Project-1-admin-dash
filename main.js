// main.js
import { addTodoItem } from './todo2.js';

document.addEventListener('DOMContentLoaded', () => {
  const todoList = document.querySelector('#todoList');
  const todoInput = document.querySelector('#todoInput');
  const addButton = document.querySelector('#addButton');

  addButton.addEventListener('click', () => {
    const text = todoInput.value.trim();
    if (text !== '') {
      addTodoItem(todoList, text);
      todoInput.value = '';
    }
  });
});

// todo2.js
import { createTodoItem } from './todo1.js';

export function addTodoItem(todoList, text) {
  const todoItem = createTodoItem(text);
  todoList.appendChild(todoItem);
}

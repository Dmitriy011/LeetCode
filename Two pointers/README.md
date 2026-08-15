## 👌 Задача 5 Add Two Numbers (сложить два связных списка)  
5) 2а связанных списка, представляющих два неотрицательных целых числа. Цифры хранятся в обратном порядке. Сложите два числа и верните сумму в виде связанного списка.
<img width="281" height="445" alt="image" src="https://github.com/user-attachments/assets/e6203624-e7bd-48b3-888c-d8ea606fe351" />


## 👌 Задача 19 Remove Nth Node From End of List (Easy) (Удалить из конца списка n-ый эл)  
19) Удалите n-ый эл с конца списка (изв head узел)

- fast вперед на n  
- while (fast && fast->next): fast, slow ++  
- ListNode* toDelete = slow->next;  
<img width="155" height="193" alt="image" src="https://github.com/user-attachments/assets/26778953-ddcd-45a9-bd45-b345298b3996" />

## Задача 26 Remove Duplicates from Sorted Array (Easy) (Удалить дубликаты из отсортированного arr)  
26) Массив целых чисел arr, отсортированный в порядке неубывания.  
Удалить дубликаты на месте. Верните количество уникальных элементов.  
​  
!!! Первые k элементы массива arr должны содержать уникальные числа в отсортированном порядке. Остальные элементы после индекса  k - 1 можно игнорировать.  

-  int slow = 0, fast = 1
-  while (fast < nums.size()):  
if (nums[slow] != nums[fast]) -> slow++ и nums[slow] = nums[fast];  
++fast;
-  return slow + 1

## Задача 27 Remove Element (Easy) (Удалить все вхождения val в arr)  
27) Массив целых чисел arr, целое число val.  
Удалите все вхождения val на arr месте из массива (порядок элементов может быть изменен)
Верните количество элементов в массиве, которые не равны val  

- for (auto it = arr.begin(); it != arr.end(); )
- Если *it == val, то it = arr.erase(it); Иначе: it++
- return arr.size();

## Задача 28 Find the Index of the First Occurrence in a String (Easy) (Индекс 1го вхождения str needle в haystack) 
28) 2 строки needle и haystack.  
Верните индекс 1го вхождения строки needle в haystack, или , -1 если needle строка не является ч haystack.

## 👌 Задача 88 Merge Sorted Array (Easy) (Объединить 2 отсортированных arr) 
88) 2 целочисленных массива arr1 и arr2, отсортированные в порядке неубывания  
2 целых числа m и n - количество элементов в arr1 и arr2.  
Объединить arr1 и arr2 в один массив, отсортированный в порядке неубывания.  
Окончательно отсортированный массив должен храниться внутри массива arr (для этого arr1 имеет длину m + n, где 1ые m эл обозначают те, которые следует объединить, а последние n эл имеют знач 0)
  
Ввод: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3  
Выход: [1,2,2,3,5,6]  

<img width="390" height="322" alt="image" src="https://github.com/user-attachments/assets/9e2f6507-74f9-4375-9f02-a775395964e3" />

## 👌 Задача 125 Valid Palindrome (Easy) (Строка палиндром?)
125) Строка s. Вернуть значение, true если она является палиндромом или false иначе
<img width="234" height="50" alt="image" src="https://github.com/user-attachments/assets/a2f25d1f-d2c5-4a70-aa3a-bd75e7b6b951" />

## 👌 Задача 141 Linked List Cycle (Easy) (Содержит ли связный список цикл)
141) Дано head  связанного списка.  
Определите, содержит ли связанный список цикл.
  
Вход: head = [3,2,0,-4], pos = 1  
Выход: true  

-  while (fast && fast->next):  
<img width="1087" height="194" alt="image" src="https://github.com/user-attachments/assets/8e0d4b18-965f-4cf7-a255-b3be17f5ebb9" />

## 👌 Задача 160. Intersection of Two Linked Lists (Easy) (Найти пересчение 2ух связных списков)
160) 2 целочисленных массива arr1 и arr2, отсортированные в порядке неубывания  
headA и headB (Вход: listA = [1,9,1,2,4], listB = [3,2,4])   
Верните узел, в котором эти два списка пересекаются (если два связанных списка не пересекаются, верните null)   

- подсчитать размер sizeA, sizeB (пусть sizeA > sizeB)  
<img width="1481" height="218" alt="image" src="https://github.com/user-attachments/assets/c796ecfb-97cc-41f7-8ea8-dae4771831dc" />

## 👌Задача 202. Happy Number (Easy) (Счастливое ли число?)
202) n счастливое? Счастливое число — это число: начиная с любого положительного целого числа, замените это число суммой квадратов его цифр, повторяйте процесс до тех пор, пока число не станет равным 1. Те числа, для которых этот процесс заканчивается на 1, счастливы.
<img width="230" height="90" alt="image" src="https://github.com/user-attachments/assets/8c81d387-760c-43f9-a2de-745e00ae62d3" />

## 👌Задача 234. Palindrome linked list (Easy) (Связный список палиндром?)
234) head односвязн списка
Верните значение true если это палиндром. False - иначе
<img width="622" height="73" alt="image" src="https://github.com/user-attachments/assets/2d390de6-0287-46e1-ba1f-a671eb71936e" />.    
<img width="350" height="450" alt="image" src="https://github.com/user-attachments/assets/bbe040dd-537b-4824-bc11-576130ddda8b" />.     

## 👌Задача 283. Move Zeroes (Easy) (Перенести нули в конец, оставив порядок ненулевых чисел)
293) Дана целочисленная матрица nums. Перенести нули в конец, оставив порядок ненулевых чисел
<img width="356" height="120" alt="image" src="https://github.com/user-attachments/assets/1bc9a2d9-e7c6-4e84-92f8-64206b5e2d96" />

## 👌 Задача 876 Middle of the Linked List (Easy) (Найти середину связного списка)
876) head односвязного списка.  
Верните средний узел этого списка (если есть 2 промежуточных узла, верните 2ой промежуточный узел)
   
- fast, slow
- while (fast && fast->next): fast = fast->next->next; slow = slow->next;
- return slow  
<img width="279" height="53" alt="image" src="https://github.com/user-attachments/assets/ccd9bd62-6602-486e-aafc-a3dcd40baf2f" />



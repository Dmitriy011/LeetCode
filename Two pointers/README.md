## 👌 Задача 19 Remove Nth Node From End of List (Easy) (Удалить из конца списка n-ый эл)  
19) head узел связанного списка  
Удалите n-ый эл с конца списка

Вход: head = [1,2,3,4,5], n = 2  
Выход: [1,2,3,5]

- fast вперед на n  
- while (fast && fast->next): fast, slow ++  
- ListNode* toDelete = slow->next;  
<img width="550" height="150" alt="image" src="https://github.com/user-attachments/assets/239c543d-a2c5-4fcf-a726-7d90a456c25f" />


## Задача 26 Remove Duplicates from Sorted Array (Easy) (Удалить дубликаты из отсортированного arr)  
26) Массив целых чисел arr, отсортированный в порядке неубывания.  
Удалить дубликаты на месте. Верните количество уникальных элементов.  
​  
!!! Первые k элементы массива arr должны содержать уникальные числа в отсортированном порядке . Остальные элементы после индекса  k - 1 можно игнорировать.  

Вход: nums = [1,1,2]  
Выход: 2, nums = [1,2,_]

-  int slow = 0, fast = 1
-  while (fast < nums.size()):  
if (nums[slow] != nums[fast]) -> slow++ и nums[slow] = nums[fast];  
++fast;
-  return slow + 1

## Задача 27 Remove Element (Easy) (Удалить все вхождения val в arr)  
27) Массив целых чисел arr целое число val.  
Удалите все вхождения val на arr месте из массива (порядок элементов может быть изменен)
Верните количество элементов в массиве, которые не равны val  

Вход: arr = [0,1,2,2,3,0,4,2], val = 2  
Выход: 5, arr = [0,1,4,0,3,_,_,_]  
Пояснение: Ваша функция должна возвращать k = 5, причем первые пять элементов arr должны содержать 0, 0, 1, 3 и 4.  
Пять элементов могут быть возвращены в любом порядке.   
Не имеет значения, что вы оставите после возвращаемого k (поэтому они являются символами подчеркивания).

- for (auto it = arr.begin(); it != arr.end(); )
- Если *it == val, то it = arr.erase(it); Иначе: it++
- return arr.size();

## Задача 28 Find the Index of the First Occurrence in a String (Easy) (Индекс 1го вхождения str needle в haystack) 
28) 2 строки needle и haystack.  
Верните индекс 1го вхождения строки needle в haystack, или , -1 если needle строка не является частью haystack.

## 👌 Задача 88 Merge Sorted Array (Easy) (Объединить 2 отсортированных arr) 
88) 2 целочисленных массива arr1 и arr2, отсортированные в порядке неубывания  
2 целых числа m и n - количество элементов в arr1 и arr2.  
Объединить arr1 и arr2 в один массив, отсортированный в порядке неубывания.  
Окончательно отсортированный массив должен храниться внутри массива arr (для этого arr1 имеет длину m + n, где 1ые m эл обозначают те, которые следует объединить, а последние n эл имеют знач 0)
  
Ввод: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3  
Выход: [1,2,2,3,5,6]  

- p1 = m - 1; p2 = n - 1; cur = m + n - 1
- Сравниваем элементы while(p1 >=0 && p2 >= 0): Если эл под p1 больше, то записываем его на Pos cur и --p1, -- cur (аналогично для p2)
- Дописываем оставшиеся элементы под cur и --cur  
<img width="700" height="160" alt="image" src="https://github.com/user-attachments/assets/21b10830-ccde-4adb-a4ca-28247a5b9dde" />


## 👌 Задача 125 Valid Palindrome (Easy) (Строка палиндром?)
125) Строка s.  
Вернуть значение, true если она является палиндромом или false иначе  
   
Ввод: s = "A man, a plan, a canal: Panama"  
Выход: true

- Преобразовать строку
- L = 0, R = s.length() - 1;
- while (L < R):  
if (s[L] != s[R]) -> return false;  
else -> --R ++L
- return true 

## 👌 Задача 141 Linked List Cycle (Easy) (Содержит ли связный список цикл)
141) Дано head  связанного списка.  
Определите, содержит ли связанный список цикл.
  
Вход: head = [3,2,0,-4], pos = 1  
Выход: true  
<img width="150" height="75" alt="image" src="https://github.com/user-attachments/assets/fed5a193-635f-4ff9-82ab-6c79fb7ae9a0" />  

-  while (fast && fast->next):  
fast = fast->next->next;  
slow = slow->next;  
if (fast == slow) -> return true;
- return false


## 👌 Задача 160. Intersection of Two Linked Lists (Easy) (Найти пересчение 2ух связных списков)
160) 2 целочисленных массива arr1 и arr2, отсортированные в порядке неубывания  
headA и headB  
Верните узел, в котором эти два списка пересекаются (если два связанных списка не пересекаются, верните null)

Вход: listA = [1,9,1,2,4], listB = [3,2,4]  
Выход: т.2   
<img width="150" height="75" alt="image" src="https://github.com/user-attachments/assets/41598398-049e-41cd-a136-d28e1aec5eb4" />  

- подсчитать размер sizeA, sizeB (пусть sizeA > sizeB)
- it1 на pos (size1 - size2)
- it1++, it2++ пока возможно
- return it1, если it1 == it2
<img width="550" height="150" alt="image" src="https://github.com/user-attachments/assets/6f60f5b6-43eb-4008-8ab3-3682a9095fc1" />

## 👌Задача 234. Palindrome linked list (Easy) (Связный список палиндром?)
234) head односвязн списка
Верните значение true если это палиндром. False - иначе
<img width="400" height="160" alt="image" src="https://github.com/user-attachments/assets/08f97c4e-0d47-4221-9f88-295a30ab942b" />.  
<img width="550" height="75" alt="image" src="https://github.com/user-attachments/assets/86239857-2976-484d-acda-69076cb4d8a5" />.  
<img width="350" height="450" alt="image" src="https://github.com/user-attachments/assets/bbe040dd-537b-4824-bc11-576130ddda8b" />.     



## 👌 Задача 876 Middle of the Linked List (Easy) (Найти середину связного списка)
876) head односвязного списка.  
Верните средний узел этого списка (если есть 2 промежуточных узла, верните 2ой промежуточный узел)
   
- fast, slow
- while (fast && fast->next): fast = fast->next->next; slow = slow->next;
- return slow  
<img width="550" height="150" alt="image" src="https://github.com/user-attachments/assets/725193d2-9823-41ea-94b4-4cc1fe27b4ef" />


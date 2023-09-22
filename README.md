Задача
Добавьте в ваш проект чата логгирование сообщений от других участников чата и своих сообщений.

Для этого напишите класс Logger, через который будет проходить вся работа с файлом логов. Сохраняйте сообщения в файл на диске, можете назвать его log.txt. При создании объекта логгера должно производиться открытие файла, а при его разрушении — закрытие файла (концепт RAII).

Реализуйте в классе два метода:

1 запись строки логов в файл;
2 чтение одной строки из файла.
Конечно же, запись и чтение должны быть потокобезопасными — при одновременном вызове нескольких потоков с записью в файл и чтением из файла, не должно происходить взаимоблокировок и гонок данных.

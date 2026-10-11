/*
STATIC DATA MEMBERS IN C++

1. A static data member belongs to the CLASS and is shared by all its objects.
   Each object does not get a separate copy.

2. Declare it inside the class using the 'static' keyword:
   static int count;

3. Usually, define and initialize it once outside the class:
   int Customer::count = 0;
   // Do not repeat 'static' here.

4. A public static member can be accessed using the class name:
   Customer::count;
   // No object is required.

5. Changing it through one object affects the shared value seen by all objects.

6. Access rules still apply:
   a private static member cannot be accessed directly from main().

7. Static data members are not included in sizeof(object).

8. Since C++17, you can define and initialize it inside the class:
   inline static int count = 0;
*/
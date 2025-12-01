#include<stdio.h>
#include<math.h>

void code1()
{
    int a=10,b=15;
    float x=12.6;

    printf("A=%d \nB=%d \nC=%.2f",a,b,x);
}
void code2()
{
    int a=7,b=5;

    int perimeter = 2*(a+b);
    int area = a*b;

    printf("Perimeter of the rectangle =%d meter\n",perimeter);
    printf("Area of the rectangle =%d square meter\n",area);
}
void code3()
{
    float celsius, fahrenheit;

    printf("Enter temperaure in celsius =");
    scanf("%f", &celsius);
    fahrenheit=(celsius*9/5)+32;

    printf("Celsius is= %.2f Fahrenheit is =%.2f ",celsius,fahrenheit);
}
void code4()
{
    float pi=3.1416, r,volume;

    printf("Enter the redius =");
    scanf("%f", &r);
    volume=4.0/3.0*pi*(r*r*r);

    printf("Volume of a sphere is =%.2f\n",volume);
}
void code5()
{
    float pi=3.1416, r,perimeter,area;

    printf("Enter the redius =");
    scanf("%f", &r);
    perimeter=2.0*pi*r;
    area=pi*(r*r);

    printf("Perimeter is =%.2f\nArea is =%.2f",perimeter,area);
}
void code6()
{
    int height,width,perimeter;

    printf("Enter the height =");
    scanf("%d",&height);
    printf("Enter the width =");
    scanf("%d",&width);
    perimeter=2*(height+width) ;

    printf("Perimeter is =%d\n",perimeter);

}
void code7()
{
    int hours,minutes,total_minutes;

    printf("Enter hours =");
    scanf("%d",&hours);
    printf("Enter minutes =");
    scanf("%d",&minutes );
    total_minutes = hours*60+ minutes ;

    printf("Total minutes is =%d\n",total_minutes);
}
void code8()
{
    float weight1, weight2, purchases1, purchases2, average_value;

    //Input for item 1

    printf("Enter weight of item 1=");
    scanf("%f",&weight1);
    printf("Enter number of purchases for item 1=");
    scanf("%f",&purchases1);

    //Input for item 2

    printf("Enter weight of item 2=");
    scanf("%f",&weight2);
    printf("Enter number of purchases for item 2=");
    scanf("%f",&purchases2);

    // Calculate total weight and total purchases

    float total_weight = weight1 * purchases1 + weight2 * purchases2;
    float total_purchases = purchases1 + purchases2;


    average_value=total_weight/total_purchases ;

    printf("Average value of the items is =%.2f\n",average_value);
}
void code9()
{
    int seconds, hours, minutes;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    // Calculate hours
    hours = seconds / 3600;

    // Calculate minutes
    minutes = (seconds % 3600) / 60;

    // Calculate remaining seconds
    seconds = seconds % 60;

    printf(" %d Seconds = %d hours %d minutes %d seconds\n", seconds, hours, minutes, seconds);
}
void code10()
{
    int employee_id, total_hours, hours_rate;

    printf("Enter employee ID: ");
    scanf("%d", &employee_id);

    printf("Enter total hours worked in a month: ");
    scanf("%d", &total_hours);

    printf("Enter amount received per hour: ");
    scanf("%d", &hours_rate);

    int salary = total_hours * hours_rate;

    printf("\nEmployee ID: %d\nSalary: %d\n", employee_id, salary);

}
void code11()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Reversed number: ");

    // Extract digits and print in reverse order
    while (number > 0) {
        int digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }

    printf("\n");
}
void code12()
{
    float principal, rate, time, SI, CI;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period: ");
    scanf("%f", &time);

    // Calculate Simple Interest
    SI = (principal * rate * time) / 100;

    // Calculate Compound Interest
    CI = principal * pow((1 + rate / 100), time) - principal;

    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);
}
void code13()
{
    int a, b;

    printf("Enter the value of A = ");
    scanf("%d", &a);

    printf("Enter the value of B = ");
    scanf("%d", &b);

    printf("\nBefore swapping =\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping without a temporary variable

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping =\n");
    printf("a = %d, b = %d\n", a, b);

}
void code14()
{
    float weight1, weight2, num1, num2, average_value;

    printf("Enter weight of item 1: ");
    scanf("%f", &weight1);

    printf("Enter number of item 1: ");
    scanf("%f", &num1);

    printf("Enter weight of item 2: ");
    scanf("%f", &weight2);

    printf("Enter number of item 2: ");
    scanf("%f", &num2);

    // Calculate average value
    average_value = (weight1 * num1 + weight2 * num2 )/ (num1 + num2);

    printf("Average Value = %.5f\n", average_value);
}
void code15()
{
    int distance;

    float fuel_spent, average_consumption;

    printf("Input total distance in km: ");
    scanf("%d", &distance);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel_spent);

    // Calculate average consumption
    average_consumption = (float)distance / fuel_spent;

    printf("Average consumption (km/lt) %.3f\n", average_consumption);
}
void code16()
{
    float x1, y1, x2, y2, distance;

    printf("Input x1: ");
    scanf("%f", &x1);

    printf("Input y1: ");
    scanf("%f", &y1);

    printf("Input x2: ");
    scanf("%f", &x2);

    printf("Input y2: ");
    scanf("%f", &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the said points: %.4f\n", distance);
}
void code17()
{
    int grade_number;

    printf("Enter the number = ");
    scanf("%d",&grade_number);

    if(grade_number>=60){

        printf("Passed \n");

    }
}
void code18()
{
    int a, b;

    printf("Enter the number 1 = ");
    scanf("%d",&a);

    printf("Enter the number 2 = ");
    scanf("%d",&b);

    if(a == b){

        printf("number-1 and number-2 are equal \n");

    }
    else{
        printf("They are not equal\n");
    }
}
void code19()
{
     int a;

    printf("Enter the number = ");
    scanf("%d",&a);

    if(a%2==0){

        printf("The number even \n");

    }
    else{
        printf("The number is odd \n");
    }
}
void code20()
{
    int a;

    printf("Enter the number = ");
    scanf("%d",&a);

    if(a%2==0){

        printf("Square = %d\n",a*a);

    }
    else{
        printf("Cube =%d\n",a*a*a);
    }
}
void code21()
{
    int a;

    printf("Enter the number = ");
    scanf("%d",&a);

    if(a>=0){

        printf("The number is positive");

    }
    else{
        printf("The number is negative");
    }
}
void code22()
{
    int a;

    printf("Enter the candidate age = ");
    scanf("%d",&a);

    if(a>=18){

        printf("Eligible for casting his/her own vote");

    }
    else{
        printf("Not eligible for casting his/her own vote");
    }
}
void code23()
{
    int m, n;

    printf("Enter the value of m = ");
    scanf("%d",&m);

    if(m>0){
        printf("The value of n is =1");
    }
    else if(m==0){
        printf("The value of n is =0");
    }
    else if(m<0){
        printf("The value of n is =-1");
    }
}
void code24()
{
    int x, y;

    printf("Enter the value of x = ");
    scanf("%d",&x);

    printf("Enter the value of y = ");
    scanf("%d",&y);

    if(x>0 && y>0){
        printf("First quadrant \n");
    }
    else if(x<0 && y>0){
        printf("Second quadrant \n");
    }
    else if(x<0 && y<0){
        printf("Third quadrant \n");
    }
    else if(x>0 && y<0){
        printf("Fourth quadrant \n");
    }
}
void code25()
{
    int a;

    printf("Enter the value of a = ");
    scanf("%d",&a);

    if(a%5==0 && a%11==0){
        printf("Divisible \n");
    }
    else {
        printf("The value is not divisible\n");
    }
}
void code26()
{
    char a;

    printf("Enter a character: ");
    scanf(" %c", &a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            printf("%c is a vowel\n", a);
        }
        else {
            printf("%c is a consonant\n", a);
        }
    }
}
void code27()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch >= 'a' && ch <= 'z') {
            printf("%c is a small letter.\n", ch);
        } else {
            printf("%c is a capital letter.\n", ch);
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special symbol.\n", ch);
    }
}
void code28()
{
    int a;

     printf("enter the value of a=");
     scanf("%d",&a);

     switch(a){
        case 1 :
        printf("January\n");
        break;
        case 2 :
        printf("February\n");
        break;
        case 3 :
        printf("March\n");
        break;
        case 4 :
        printf("April\n");
        break;
        case 5 :
        printf("May\n");
        break;
        case 6 :
        printf("June\n");
        break;
        case 7 :
        printf("July\n");
        break;
        case 8 :
        printf("August\n");
        break;
        case 9 :
        printf("September\n");
        break;
        case 10 :
        printf("October\n");
        break;
        case 11 :
        printf("November\n");
        break;
        case 12 :
        printf("December\n");
        break;

        default:
            printf("invalid\n");
     }
}
void code29()
{
    int a;

     printf("enter the value of a=");
     scanf("%d",&a);

     switch(a){
        case 1 :
        printf("Monday\n");
        break;
        case 2 :
        printf("Tuesday\n");
        break;
        case 3 :
        printf("Wednesday\n");
        break;
        case 4 :
        printf("Thursday\n");
        break;
        case 5 :
        printf("Friday\n");
        break;
        case 6 :
        printf("Saturday\n");
        break;
        case 7 :
        printf("Sunday\n");
        break;

        default:
            printf("Invalid\n");
     }
}
void code30()
{
    int a;

     printf("enter the value of a=");
     scanf("%d",&a);

     switch(a){
        case 0 :
        printf("Zero\n");
        break;
        case 1 :
        printf("One\n");
        break;
        case 2 :
        printf("Two\n");
        break;
        case 3 :
        printf("Three\n");
        break;
        case 4 :
        printf("Four\n");
        break;
        case 5 :
        printf("Five\n");
        break;
        case 6 :
        printf("Six\n");
        break;
        case 7 :
        printf("Seven\n");
        break;
        case 8 :
        printf("Eight\n");
        break;
        case 9 :
        printf("Nine\n");
        break;

        default:
            printf("invalid\n");
     }
}
void code31()
{
    char a;

     printf("enter the value of a=");
     scanf("%c",&a);

     switch(a){
        case'a':
        printf("Vowel\n");
        break;
        case'e':
        printf("Vowel\n");
        break;
        case'i':
        printf("Vowel\n");
        break;
        case'o':
        printf("Vowel\n");
        break;
        case'u':
        printf("Vowel\n");
        break;
        case'A':
        printf("Vowel\n");
        break;
        case'E':
        printf("Vowel\n");
        break;
        case'I':
        printf("Vowel\n");
        break;
        case'O':
        printf("Vowel\n");
        break;
        case'U':
        printf("Vowel\n");
        break;


        default:
            printf("Consonant\n");
     }

}
void code32()
{
    char a;

     printf("enter the value of a=");
     scanf("%c",&a);

     switch(a){
        case'E':
        printf("Excellent\n");
        break;
        case'V':
        printf("Very Good\n");
        break;
        case'G':
        printf("Good\n");
        break;
        case'A':
        printf("Average\n");
        break;
        case'F':
        printf("Fail\n");
        break;

        default:
            printf("invalid\n");
     }
}
void code33()
{
     int a, b;
    printf("Enter a =");
    scanf("%d",&a);

    printf("Enter b =");
    scanf("%d",&b);

     int c, result;
    printf("Enter c =");
    scanf("%d",&c);

    switch(c){
        case 1 :
        result =a*b;
        printf("Multiplication is %d\n", result);
        break;

        case 2 :
        result =a+b;
        printf("Addition is %d\n",result);
        break;

        case 3 :
        result =a-b;
        printf("Substraction is %d\n",result);
        break;

        case 4 :
        result =a/b;
        printf("Division is %d\n",result);
        break;

        default:
        printf("Invalid\n");
    }

}
void code34()
{
    int n;
    int num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        printf("You entered: %d\n", num);
    }
}
void code35()
{
    int n;

    printf("Enter the number n: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d", i);
        if (i < n) {
            printf("+");
        }
        i++;
    }
    printf("\n");


}
void code36()
{
    int i, n, count = 0;
    printf("Enter the number of elements n: ");
    scanf("%d", &n);

     i = 1;
    while (count < n) {
        printf("%d", i);
        if (count < n - 1) {
            printf("+");
        }
        i =i+2;
        count++;
    }printf("\n");


}
void code37()
{
    int i, n, count = 0;
    printf("Enter the number of elements n: ");
    scanf("%d", &n);

        i = 2;
    while (count< n) {
        printf("%d", i);
        if (count < n - 1) {
            printf("+");
        }
        i=i+2;
        count++;
    }


}
void code38()
{
    int n, i = 1, count = 0;

    printf("Enter the number of elements n: ");
    scanf("%d", &n);

    int current = 1;
    while (count < n) {
        printf("%d", current);
        if (count < n - 1) {
            printf("+");
        }
        current += i;
        i++;
        count++;
    }

}
void code39()
{
     int x, y, result = 1;

    printf("Enter the number (x  and y)\n");
    scanf("%d %d",&x ,&y);

    for(int i = 1;i <= y;i++){
       //x^y calculation
        result=result*x;
    }
    printf("%d ^ %d is: %d\n", x, y, result);

}
void code40()
{
    int n, count = 0;
    float avg, sum = 0;

    printf("Enter integers (9999 to stop):\n");

    while(1) {
        scanf("%d", &n);
         if (n == 9999) {
            break;
        }
        sum =sum+n;
        count++;
    }
        avg = sum / count;
        printf("The average of the entered numbers is: %.2f\n", avg);


}
void code41()
{
     int n, sum = 0;

    printf("Enter the number of even numbers: ");
    scanf("%d", &n);

    // header
    printf("Value\tSum\n");

    for (int i = 1; i <= n; i++) {
        int even_number = 2 * i;  //i-th even number
        sum =sum+even_number;

        printf("%d\t%d\n", even_number, sum);
    }

}
void code42()
{
     int n, num1 = 0, num2 = 1;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", num1, num2);

  //3rd to nth terms
    for (int i = 3; i <= n; ++i) {
     int next_term = num1 + num2;
    printf("%d, ", next_term);

    num1 = num2;
    num2 = next_term;
    next_term = num1 + num2;
  }printf("\n");

}
void code43()
{
    int n, factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }

}
void code44()
{
      int rem=0, number;

    printf("Enter number=");
    scanf("%d",&number);

    for(int i=1;i<=number/2;i++){
        if(number%i==0){
            printf("%d\n",i);
            rem+=i;

        }
    }if(number==rem){
        printf("Perfect number\n");
    }else{
        printf("not perfect");
    }

}
void code45()
{
    int sum=0,rem=0,number ;

    printf("Enter number =");
    scanf("%d",&number);

    int temp=number;

    while(number!=0){
        rem=number%10;
        number=number/10;
        sum+=rem*rem*rem;
    }if(temp==sum){
        printf("Armstrong\n");

    }else{
        printf("Not armstrong");
    }

}
void code46()
{
     int flag=0,number;

    printf("enter number =");
    scanf("%d",&number);

    for(int i=2; i<=number/2; i++)
    {

        if(number%i==0)
        {

            flag=1;

        }
    }
    if(flag==0){
        printf("Prime number\n");
    }else{
        printf("Not prime number");
    }
}
void code47()
{
    int i, number, rem, revers=0;

   printf("Enter number =");
   scanf("%d",&number);

   while(number!=0){
    rem=number%10;
    revers=revers*10+rem;
    number/=10;
   }
   printf("reverse is %d\n",revers);

}
void code48()
{
    int num, rev=0, rem;

    printf("Input a number: ");
    scanf("%d", &num);

    int temp = num;

    while(num!=0) {
        rem = num%10;
        rev = rev*10+rem;
        num /=10;
    }

    if (temp == rev) {
        printf("%d is a palindrome number.\n", temp);
    } else {
        printf("%d is not a palindrome number.\n", temp);
    }
}
void code49()
{
     int i,j,n;
    printf("enter ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }printf("\n");
    }

}
void code50()
{
     int i,j,n;
    printf("enter ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }printf("\n");
    }

}
void code51()
{
    int i,j,n;
    printf("enter ");
    scanf("%d",&n);
int x=1;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ",x);
            x++;
        }

        printf("\n");
    }

}
void code52()
{
    int i,j,n,k;
    printf("enter ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d ",i);

        }

        printf("\n");
    }

}
void code53()
{
     int n;
    printf("Enter Number of element :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");


}
void code54()
{
     int n,sum=0;
    printf("Enter Number of element :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d\n",sum);

}
void code55()
{
    int n;
    printf("Enter Number of element :");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int second_largest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n",second_largest );

}
void code56()
{
    int n, p, x, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position and element to be inserted: ");
    scanf("%d %d", &p, &x);

    if (p < 1 || p > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = n; i >= p; i--) {
        arr[i] = arr[i - 1];
    }

    arr[p - 1] = x;


    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
void code57()
{
    int n, i, p;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &p);

    if (p < 1 || p > n) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = p - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
void code58()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}
void code59()
{
    int n, d, count[10] = {0};

    printf("Enter a number: ");
    scanf("%d",&n);

    while (n>0) {
        d=n%10;
        count[d]++;
        n /= 10;
    }

    int total_duplicates = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > 1) {
            total_duplicates += count[i] - 1;
        }
    }

    printf("Total number of duplicate digits: %d\n", total_duplicates);

}
void code60()
{
    int n, rem;
    int a[10]={0};

    printf("Input the number: ");
    scanf("%d",&n);


    while (n!=0) {
        rem = n % 10;
        a[rem]++;
        n /= 10;
    }

    printf("The unique elements found in the array are:\n");
    for (int i=0;i<10;i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
}
void code61()
{
    int i,j;
  int a[3][3];

  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("Element-[%d],[%d] :",i,j);
    scanf("%d",&a[i][j]);
   } printf("\n");
  }
  printf("The matrix is : \n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("%d ",a[i][j]);

   }printf("\n");
  }
}
void code62()
{
    int i,j,numberOfRow,numberOfColumn;

    printf("Enter the number of row and column :");
    scanf("%d %d",&numberOfRow,&numberOfColumn);

    int a[numberOfRow][numberOfColumn],b[numberOfRow][numberOfColumn],c[numberOfRow][numberOfColumn];

//scaning A matrix
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("Element-[%d],[%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
//Printing A matrix
    printf("A matrix is : \n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }

    //scaning B matrix
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("Element-[%d],[%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
//Printing B matrix
    printf("B matrix is : \n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("%d ",b[i][j]);

        }
        printf("\n");
    }

        //Adding A,B

        for(i=0; i<numberOfRow; i++)
        {
            for(j=0; j<numberOfColumn; j++)
            {
                c[i][j]=a[i][j]+b[i][j];

            }
        }
        printf("\nThe addition of two matrix is : \n");
        for(i=0; i<numberOfRow; i++)
        {
            for(j=0; j<numberOfColumn; j++)
            {
                printf("%d ",c[i][j]);

            }printf("\n");
        }
}
void code63()
{
    int i,j,k,numberOfRow,numberOfColumn;

    printf("Enter the number of row and column :");
    scanf("%d %d",&numberOfRow,&numberOfColumn);

    int a[numberOfRow][numberOfColumn],b[numberOfRow][numberOfColumn],c[numberOfRow][numberOfColumn];

//Scaning A matrix
    for(i=0; i<numberOfRow; i++)

    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("Element-[%d],[%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
//Printing A matrix
    printf("A matrix is : \n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("%d ",a[i][j]);
        }

        printf("\n");
    }
//Scaning B matrix
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("Element-[%d],[%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

//Printing B matrix

    printf("B matrix is : \n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("%d ",b[i][j]);
        }

        printf("\n");
    }
// Multiplying matrices A and B
    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < numberOfColumn; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
// Printing the result matrix C

    printf("\nProduct matrix C:\n");
    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void code64()
{
    int i,j,numberOfRow,numberOfColumn;

    printf("Enter the number of row and column :");
    scanf("%d %d",&numberOfRow,&numberOfColumn);

    int a[numberOfRow][numberOfColumn],b[numberOfRow][numberOfColumn],transpose[numberOfRow][numberOfColumn];

//Scaning A matrix
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("Element-[%d],[%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
//Printing A matrix
    printf("A matrix is : \n");
    for(i=0; i<numberOfRow; i++)
    {
        for(j=0; j<numberOfColumn; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }


// Finding transpose of matrix A
    for (i = 0; i < numberOfColumn; i++) {
        for (j = 0; j < numberOfRow; j++) {
            transpose[i][j] = a[j][i];
        }
    }

    // Printing the transpose matrix
    printf("\nTranspose of Matrix A:\n");
    for (i = 0; i < numberOfColumn; i++) {
        for (j = 0; j < numberOfRow; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
void code65()
{
     int i, j, numberOfRow, numberOfColumn;
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &numberOfRow, &numberOfColumn);

    int a[numberOfRow][numberOfColumn];

    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
            printf("Element-[%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("The matrix is: \n");
    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < numberOfRow; i++)
    {
        if (i < numberOfColumn)
        {
            sum += a[i][numberOfColumn - i - 1];
        }
    }

    printf("Sum of the right diagonal: %d\n", sum);

}
void code66()
{
    int i, j, numberOfRow, numberOfColumn;
    int a[10][10];
    int identity = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &numberOfRow, &numberOfColumn);

    if (numberOfRow != numberOfColumn) {
        printf("Matrix is not square, so it can't be an identity matrix.\n");
        return 0;
    }

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            printf("Element-[%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is: \n");
    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            if (i == j) {
                if (a[i][j] != 1) {
                    identity = 0;
                }
            } else {
                if (a[i][j] != 0) {
                    identity = 0;
                }
            }
        }
    }

    if (identity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }
}
void code67()
{
    int i, j, k, numberOfRow, numberOfColumn;
    int searchElement, found = 0;


    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &numberOfRow, &numberOfColumn);

    int a[numberOfRow][numberOfColumn],b[numberOfRow][numberOfColumn],c[numberOfRow][numberOfColumn];

    // Scanning matrix A
    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            printf("Element-[%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // Printing matrix A
    printf("Matrix A is: \n");
    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element to search in the matrix: ");
    scanf("%d", &searchElement);

    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            if (a[i][j] == searchElement) {
                printf("Element %d found at position (%d, %d)\n", searchElement, i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the matrix.\n", searchElement);
    }

    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            printf("Element-[%d],[%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B is: \n");
    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            c[i][j] = 0;
            for (k = 0; k < numberOfColumn; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nProduct matrix C:\n");
    for (i = 0; i < numberOfRow; i++) {
        for (j = 0; j < numberOfColumn; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int choise;

    printf("Enter any number from (1-67) to see code : ");
    scanf("%d",&choise);

    if(choise == 1)
    {
        code1();
    }
    else if(choise == 2)
    {
        code2();
    }
    else if(choise == 3)
    {
        code3();
    }
    else if(choise == 4)
    {
        code4();
    }
    else if(choise == 5)
    {
        code5();
    }
    else if(choise == 6)
    {
        code6();
    }
    else if(choise ==7)
    {
        code7();
    }
    else if(choise ==8)
    {
        code8();
    }
    else if(choise == 9)
    {
        code9();
    }
    else if(choise == 10)
    {
        code10();
    }
    else if(choise == 11)
    {
        code11();
    }
    else if(choise == 12)
    {
        code12();
    }
    else if(choise == 13)
    {
        code13();
    }
    else if(choise == 14)
    {
        code14();
    }
    else if(choise == 15)
    {
        code15();
    }
    else if(choise == 16)
    {
        code16();
    }
    else if(choise ==17)
    {
        code17();
    }
    else if(choise ==18)
    {
        code18();
    }
    else if(choise == 19)
    {
        code19();
    }
    else if(choise == 20)
    {
        code20();
    }
    else if(choise == 21)
    {
        code21();
    }
    else if(choise == 22)
    {
        code22();
    }
    else if(choise == 23)
    {
        code23();
    }
    else if(choise == 24)
    {
        code24();
    }
    else if(choise == 25)
    {
        code25();
    }
    else if(choise == 26)
    {
        code26();
    }
    else if(choise ==27)
    {
        code27();
    }
    else if(choise ==28)
    {
        code28();
    }
    else if(choise == 29)
    {
        code29();
    }
    else if(choise == 30)
    {
        code30();
    }
    else if(choise == 31)
    {
        code31();
    }
    else if(choise == 32)
    {
        code32();
    }
    else if(choise == 33)
    {
        code33();
    }
    else if(choise == 34)
    {
        code34();
    }
    else if(choise == 35)
    {
        code35();
    }
    else if(choise == 36)
    {
        code36();
    }
    else if(choise ==37)
    {
        code37();
    }
    else if(choise ==38)
    {
        code38();
    }
    else if(choise == 39)
    {
        code39();
    }
    else if(choise == 40)
    {
        code40();
    }
    else if(choise == 41)
    {
        code41();
    }
    else if(choise == 42)
    {
        code42();
    }
    else if(choise == 43)
    {
        code43();
    }
    else if(choise == 44)
    {
        code44();
    }
    else if(choise == 45)
    {
        code45();
    }
    else if(choise == 46)
    {
        code46();
    }
    else if(choise ==47)
    {
        code47();
    }
    else if(choise ==48)
    {
        code48();
    }
    else if(choise == 49)
    {
        code49();
    }
    else if(choise == 50)
    {
        code50();
    }
    else if(choise == 51)
    {
        code51();
    }
    else if(choise == 52)
    {
        code52();
    }
    else if(choise == 53)
    {
        code53();
    }
    else if(choise == 54)
    {
        code54();
    }
    else if(choise == 55)
    {
        code55();
    }
    else if(choise == 56)
    {
        code56();
    }
    else if(choise ==57)
    {
        code57();
    }
    else if(choise ==58)
    {
        code58();
    }
    else if(choise == 59)
    {
        code59();
    }
    else if(choise == 60)
    {
        code60();
    }
    else if(choise == 61)
    {
        code61();
    }
    else if(choise == 62)
    {
        code62();
    }
    else if(choise == 63)
    {
        code63();
    }
    else if(choise == 64)
    {
        code64();
    }
    else if(choise == 65)
    {
        code65();
    }
    else if(choise == 66)
    {
        code66();
    }
    else if(choise == 67)
    {
        code67();
    }
    else{
        printf("\n Invalid choice. \n");
    }

    return 0;
}

# ControllingProgramFlow
 Controlling Program Flow

 * Sequence
   - Ordering statements sequentially
  
 * Selection
   - Making decisions

 * Iletraion
   - Looping or repeating

# Ileration - Looping
 * for loop

 * Range-base for loop

 * while loop

 * do-while loop continue and break

 * infinite loops

 * Nested loops

# if Statement

             if (expr1)
               statement;

 * if the expression is true then execute the statement.

 * if the expression is false then skip the statement.


             if (num > 10)
                ++num;
    - If it's true, then num will be incremented. If it's false,
      no increment will take place.

            if (selection == "A")
             cout << "You have selected A";

            if (num > 10)
             cout << "num is greater than 10";

            if (health < 100 && player_healed)
             health = 100;

 * Block Statements

            if (num > 10){
              ++num;
              cout << "This too";
               }


            {
               //variable declaration
                 statement1;
                 statement2;
                 * * *
            }

* Create a block of code by including more than one statement in code block{}

* Blocks can also contain variable declarations

* These variables are visible only within the block - local scope

if-else Statement

            if (expr)
               stetement1;
            else
               statemnet2;

* if the expression is true then execute statement1

* if the expression is false the execute statement2

            if (num > 10)
               ++num;
            else
              num = 10;

Example 

           if (num > 10)
           cout << "num is greater than 10";
           else << "num is not great than 10";


           if (health < 100 && heal_player)
               health = 100;
           else 
             ++health;

block statemnet

             if (num > 10){
             ++num;
             cout << "increment"
             } else {
               num = 10;
               cout << "reset";
             }

             
             if (score > 90)
              cout << "A";
              else if (score > 80)
               cout << "B";
              else if (score > 70)
               cout << "C";
              else if (score > 60)
               cout << "D";
              else 
               cout << "D";
              else                // all others must be F
                << "F";
               cout << "Done";

# Nested if Statement

             if (expr1)
              if (expr2)
               statement1;
              else 
               statement

* if statement is nested with another

* Allows testing of multiple conditions

* else belongs to the closest if

Example


            if (score > 90)
             if (score >95)
              cout << "A+";
             else 
              cout << "A"; 

    ================================
              
             else 
              cout << "Sorry , No A";
              
    ==================================
    
            if (score_frank != score_billy) 
            {
              if (score_frank > socre_billy) 
               {
               cout << "Frank wins" << endl;
               } 
            else
              {
               cout << "billy wins" << endl;
              }
            }
             else 
             {
               cout << "Looks like a tie " << endl;
             }
            
# the Switch statement
* the control expression must evaluate to an integer type

* the case expressions must be constant expressions that evaluate to integer or integer literals

* Once a match occurs all following case sections are executed UNTIL a break is reached the switch complete

* Best practice - provide break statement for each case

* Best practice - default is optional, but should be handled.


Example

      switch (selection) {
        case '1': cout << "1 selected";
                   break;
        case '2': cout << "2 selected";
                   break;
        case '3':
        case '4': cout << "3 or 4 selected";
                  break;
        default: cout << "1,2,3,4 NOT selected";
      
      }

Example with an enumeration

     enum Color {red, green, blue};
     Color screen_color {green};

     switch (screen_color) {
      case red: cout << "red"; break;
      case green: cout << "green"; break:
      case blue: cout << "blue"; break;
      default:   cout << "should never execute";
     
     }
  
# Conditional Operator
* ?:

      (cond_expr) ? exprl : expr2

* cond_expr evaluates to a boolean expression
  - if cond_expr is true then the value of expr1 is returned
  - if cond_expr is false then the value of expr2 is returned
 
* Similar to if-else construct

* Ternary operator

* Very useful when used inline

* Very is to abuse!

Example 

     int a{10}, b{20};
     int score {92};
     int result {};

     result = (a > b) ? a : b;

     result = (a < b) ? (b-a) : (a-b);

     result (b != 0) ? (a/b) : 0;

     cout << ((score > 90) ? "Excellent" : "Good ");

# Looping 
iteration

* the third basic building block of programming
  - sequence, selection, iteration.

* Iteration or repetition

* Allows the execution of a statement or block of statements repeatedly

* Loops are made up a loop condition and the body which contains the statement to repeat.

Some typical use-case
* Execute a loop:
  - a specific number of times
  - for each element in a collection
  - while a specific condition becomes false
  - while a specific condition becomes true
  - until we reach the end of some input stream
  - forever
  - many, many more
 
# C++ Looping Constructs

* for loop
  - iterate a specific number of times

* Range-based for loop
  - one iteration for each element in a range or collection
 
* while loop
  - iterate while a condition remains true
  - stop when the condition becomes false
  - check the condition at the beginning of every iteration

* do-while loop
  - iterate while a condition remains true
  - stop when the condition becomes false
  - check the condition at the end of every iteration

# for Loop

    for (initialization ; condition ; increment)
     statement

    for (initialization ; condition ; increment) {
     statement (s);
    } 


    int i {0};

    for (i = 1 ; i <= 5 ; ++i)
     cout << i << endl;

    1
    2
    3
    4
    5

    for (int i {1} ; 1 <= 5 ; ++i)
     cout << i << endl;

    for (int i 1 ; 1 <= 5 ; ++i)
     cout << i << endl;
    WARNING => // i = 100; // ERROR i only visible in the loop //

 display even numbers

    for (int i {1} : i <= 10; ++i) {
     if (1 % 2 == 0)
     cout << i << endl;
    }

    2
    4
    6
    8
    10

array example 

    int scores [] {100,90,87};

    for (int i {0} ; i < 3 ; ++i){
      cout << scores[i] << endl;
    }

    for (int i {0} ; i <=2 ; ++i){
      cour << scores[i] << endl;
    }
    100
    90
    87

comma operator
          
    for (int i {1}, j {5} ; i <= 5 ; ++i, ++j){
     cout << i << " * " << j << " : " << (i * j) << endl;
    }
    1 * 5 : 5
    2 * 6 : 12
    3 * 7 : 21
    4 * 8 : 32
    5 * 9 : 45

some other details.....

* The basic for loop is very clear and concise

* Since the for loops expressions are all optional, it is possible to have
  - no initialization
  - no test
  - no increment

        for (;;)
          cout << "Endless loop" << endl;

# Ranged-based for Loop 

Introduced in C++11

    for (var_type var_name: sequence)
    statement; // can use var_name

    for (var_type var_name: sequence)
    statement; // can use var_name

    int scores [] {100,90,97};

    for (int score : scores)
     cout < score << endl;

    10
    90
    97

auto

    for (auto score : scores)
     cout < score << endl;

    10
    90
    97

vector

    vector<double> temps {87.2, 77.1, 80.0, 72.5};

    double average_temp {};
    double running_sum {};

    for (auto temp: temps)
     running_sum += temp;

    average_temp = running_sum / temps.size();

 initializer list

    double average_temp {};
    double running_sum {};
    int size {0};

    for (auto temp: {60.2, 80.1, 90.0, 78.2} ) {
     running_sum += temp;
     ++size;
    }
    average_temp = running_sum / size;
 
string 

    for (auto c: "frank")
     cout << c << endl;

    f
    r
    a
    n
    k

# While Loop

    while (expression)
     statement;

    while (expression) {
     statement (s);
    }

Example

    int i {1};

    while (i <= 5) {
     cout << i << endl;
      ++i; // important
    }

    1
    2
    3
    4
    5
    
Even numbers

    int i {1}

    wwhile (i <= 10) {
     if (1 % 2 == 0)
      cout << i << endl;
      ++i;
    }

    2
    4
    6
    8
    10

array example

    int score [] {100, 90, 87};
    int i {0};

    while (i < 3){
    cout << scores [i] << endl;
    ++i
    }

    100
    90
    87

input validation

    int number {};

    cout << "Enter an integer less than 100: ";
    cin >> number;

    while (number >= 100) { // !(number < 100)
     cout << "Enter an integer less than 100";
     cin >> number;
    }

     cout << "Thanks" << endl;

input validation - boolean flag

    bool done {false}
    int number {0};

    while (!done) {
     cout << "Enter an integer between 1 and 5: ";
     cin >> number;
     if (number <= 1 || number >= 5)
     cout << "out of range, try again" << endl;
     else{
      cout << "Thanks" << endl;
      done = true;
     }
    }

















      

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











      

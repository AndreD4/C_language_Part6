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
         







      

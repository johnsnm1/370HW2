#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{

  /* Skeleton Code
     * Open file whose name maybe provided as command line argument. If name is not provided open "numbers.txt"
     * Check if the file opened successfully. If not print the statement "File opening has failed. Ending program." and then exit the program.
     * Extract two integers from the file
     * Assume that there are only two numbers separated by space in a single line.
     * Close the file


     * Perform four operations (Addition, Subtraction, Multiplication, Division) using the following steps:
     * For each operation, fork a child process.
        * 1.If inside the Parent process display the following text
        *      "Starter: forked process with ID *child_process_id*."
        *      "Starter: waiting for process [*child_process_id*]."
        *   Use wait() to wait for the child process to complete the execution. Pass address of waitstatus as parameter to wait()
        *   Get the exit status of the child process using WEXITSTATUS() with the input parameter as waitstatus.
        *   See https://www.geeksforgeeks.org/wait-system-call-c/ for more details on usage/examples
        *   Print the following statement
        *      "Starter: Child process *child_process_id* returned *status*"
        * 2.If inside the Child process, invoke the corresponding operation program, *operation_file*.c using the function execlp
        *      See man exec or man execlp for more information on usage/paramaters
        * 3.If forking has failed, Print the following statement and exit the program.
        *      "Starter: Child Process Creation failed. Exiting."
     * Print the statement "Starter: Addition: _"
     * Print the statement "Starter: Subtraction: _"
     * Print the statement "Starter: Multiplication: _"
     * Print the statement "Starter: Division: _" where the blank is the status.
          if status is 1 replace blank by "Result Positive".
          if status is 2 replace blank by "Result Negative".
          if status is 0 replace blank by "Result Zero".
          if status is 3 replace blank by "Result Undefined".
  */

}

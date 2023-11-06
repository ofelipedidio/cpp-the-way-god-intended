// IF
#define IF if (
#define THEN ) {
#define ELSE } else {
#define DONE }

// WHILE
#define WHILE while (
#define DO ) {

int main() {
    int a = 0;
    int b = 1;
    int c = 0;

    IF a == b THEN
        c = 2;
    ELSE 
        c = 3;
    DONE

    WHILE b > a DO
        b--;
        c++; // When they say the title of the movie in the movie
    DONE
}

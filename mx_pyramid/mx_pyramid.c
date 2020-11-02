void mx_printchar (char c);

void mx_pyramid (int n) {
    int height = n;
    int length = n * 2;
    int relen = length;

    if ((n % 2 != 0) || (n < 0))
        return;
    for (int y = 1; y <= height; y++) {
        for(int x = 1; x <= length; x++){
            if (y <= height && x == n - y + 1)
                mx_printchar('/');
            else if ((y > 1 && x == n + y - 1) 
                     || (y <= n/2 && x == n + y * 2 - 1)) 
                mx_printchar('\\');
            else if (y == height && x < length - 1)
                mx_printchar('_');
            else if (y > n/2 && x == length)
                mx_printchar('|');
            else if (y <= n/2 && x > n + y * 2 - 1) 
                length = n / 2 + y;
            else 
                mx_printchar(' ');
        } 
        length = relen;
        mx_printchar('\n');
    } 
}

int main () {
    mx_pyramid(6);
}

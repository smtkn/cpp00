#include <iostream>

int main(int argc,char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if(argc == 1)
    {    
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    while(argv[i])
    {
        while(argv[i][j])
        {
            argv[i][j] = toupper(argv[i][j]);
            std::cout << argv[i][j];
            j++;
        }
        i++;
        j = 0;
    }
    std::cout << std::endl;
}

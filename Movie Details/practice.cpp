#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class Movie
{
    char * movie_name;
    int release_year;
    char * duration;
    char * genre;
public:
    Movie()
    {
        movie_name = NULL;
        duration = NULL;
        genre = NULL;
    }
    void set_movie_name(char * p)
    {
        movie_name = new char[strlen(p)+1];
        strcpy(movie_name,p);
    }
    void set_release_year(int a)
    {
        release_year = a;
    }
    void set_duration(char * p)
    {
        duration = new char[strlen(p)+1];
        strcpy(duration,p);
    }
    void set_genre(char * p)
    {
        genre = new char[strlen(p)+1];
        strcpy(genre,p);
    }
    void show1()
    {
        printf("Movie Name:%s\n",movie_name);
        printf("Release Year:%d\n",release_year);
        printf("Movie release duration:%s\n",duration);
        printf("Genre:%s\n",genre);
    }
};

class Animation : public Movie
{
    char * graphicscreator;
    char * leadvocal;
public:
    Animation()
    {
        graphicscreator = NULL;
        leadvocal = NULL;
    }
    void set_graphicscreator(char * p)
    {
        graphicscreator = new char[strlen(p)+1];
        strcpy(graphicscreator,p);
    }
    void set_leadvocal(char * p)
    {
        leadvocal = new char[strlen(p)+1];
        strcpy(leadvocal,p);
    }
    void show()
    {
        printf("Graphics Creator:%s\n",graphicscreator);
        printf("Lead Vocal:%s\n",leadvocal);
        show1();
    }
};









int main()
{
    //Movie m1;

    //m1.show();
    Animation a1;
    a1.set_graphicscreator("Joe Hardy");
    a1.set_leadvocal("Adam levain");
    a1.set_movie_name("Godfather");
    a1.set_release_year(1994);
    a1.set_duration("02:40");
    a1.set_genre("Thriller");
    a1.show();
}

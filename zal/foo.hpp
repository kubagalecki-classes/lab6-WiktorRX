#pragma once

#include "Human.hpp"

#include <algorithm>
//#include <iostream>
#include <list>
#include <vector>
// using namespace std;

int main()

    std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.begin(), people.end(), [](Human& people) { people.birthday(); });
    std::transform(people.begin(), people.end(), ret_v.begin(), [](Human& people) -> char {
        if (people.isMonster() == true)
            return 'n';
        else
            return 'y';
    });
    std::reverse(ret_v.begin(), ret_v.end());

    return ret_v;
}

/*{
    std::vector<char> ludzie(people.size());
    std::list<Human>::iterator it = people.begin();
    std::vector<char>::reverse_iterator rit=ludzie.rbegin();
    for(it;it!=people.end();it++)
    {
      it->birthday();
      if (it->isMonster()==true)
      {*rit = 'n';}
      else
      {*rit='y';}
      rit++;
    }
    return ludzie;
}*/
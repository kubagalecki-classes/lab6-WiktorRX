#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj

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
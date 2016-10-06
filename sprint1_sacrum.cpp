#include <iostream>
#include <string>
using namespace std;

int main()
{
   class robot_part
   {
   private:
    string robot_part_name;
    int part_number;
    string discription;
    double cost;
    double weight;
   public:
    robot_part(string Robot_part_name)
    {
        robot_part_name=Robot_part_name;
    }
    void get_part_number(int Part_number)
    {
        part_number=Part_number;
    }
    void get_discription(int Discription)
    {
        discription=Discription;
    }
    void get_cost(double Cost)
    {
        cost=Cost;
    }
    void get_weight(double Weight)
    {
        Weight=weight;
    }
    string robot_part()
    {
        return robot_part_name;
    }
    int robot_part_number()
    {
        return part_number;
    }
    string robot_discription()
    {
        return discription;
    }
    double robot_cost()
    {
        return cost;
    }
    double robot_weight()
    {
        return weight;
    }
   };
}

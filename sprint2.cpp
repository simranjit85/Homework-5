#include <iostream>
#include <string>
using namespace std;

   class robot_part
   {
   protected:
    string robot_part_name;
    string part_number;
    string discription;
    double cost;
    double weight;
   public:
       /*robot_part(string Robot_part_name,int Part_number,string Discription,double Cost,double Weight)
       {
           robot_part_name=Robot_part_name;
           part_number=Part_number;
           discription=Discription;
           cost=Cost;
           Weight=weight;
       }*/
    string robot_Part()
    {
        return robot_part_name;
    }
    string robot_part_number()
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
    /*virtual void component_type()
    {

    }*/
   };

    class Arm: public robot_part
    {
    protected:
        double power_consumed;
    public:
        //Arm(double get_power) : power_consumed(get_power){}

        /*void component_type()
        {
            cout << "Power consumed in watts" << endl;
            cin >> power_consumed;
        }*/
        Arm(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight,double power_Consumed)
       {
           robot_part_name=Robot_part_name;
           part_number=Part_number;
           discription=Discription;
           cost=Cost;
           Weight=weight;
           power_consumed=power_Consumed;
       }
        double powerConsumed()
        {
            return power_consumed;
        }
    };
    class Head: public robot_part
    {
    private:
        string head;
    public:
        Head(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight)
       {
           robot_part_name=Robot_part_name;
           part_number=Part_number;
           discription=Discription;
           cost=Cost;
           Weight=weight;
       }
        /*void component_type()
        {
            cout << head << endl;
        }*/
    };
    class Battery: public robot_part
    {
    private:
        double energy;
        double max_power;
    public:
        /*void component_type()
        {
            cout << "Energy supplied by a battery in watt " << endl;
            cin>> energy;
            cout << "Maximum power dissipated by a batter " << endl;
            cin>> max_power;
        }*/
         Battery(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight, double eNergy,double max_pOwer)
       {
           robot_part_name=Robot_part_name;
           part_number=Part_number;
           discription=Discription;
           cost=Cost;
           Weight=weight;
           energy=eNergy;
           max_power=max_pOwer;
       }
        double batery_energy()
        {
            return energy;
        }
        double battery_max_power()
        {
            return max_power;
        }
    };
    class Locomotor: public robot_part
    {
    private:
        double max_speed;
        double consumed_power;
    public:
        /*void component_type()
        {
            cout << "Enter max speed" << endl;
            cin >> max_speed;
            cout << "Enter consumed power" << endl;
            cin >> consumed_power;
        }*/
         Locomotor(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight,double mAx_speed,double cOnsumed_power)
       {
           robot_part_name=Robot_part_name;
           part_number=Part_number;
           discription=Discription;
           cost=Cost;
           Weight=weight;
           max_speed=mAx_speed;
           consumed_power=cOnsumed_power;
       }
        double Max_speed()
        {
            return max_speed;
        }
        double Consumed_power()
        {
            return consumed_power;
        }
    };
    class Torso: public robot_part
    {
    private:
    int number_of_battery;
    //Head head;
    //Arm arm;
    //Locomotor locomotor;
    //Battery battery;
    public:
    Torso(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight,int Number_of_battery)
       {
           robot_part_name=Robot_part_name;
           part_number=Part_number;
           discription=Discription;
           cost=Cost;
           Weight=weight;
           number_of_battery=Number_of_battery;
       }
    };
int main ()
{
    string prompt;
    string choosePart;
    string partNumber;
    string partDiscription;
    double partCost;
    double partWeight;
    double partConsumed;
    double energyValue;
    double partMaxPower;
    double partMaxSpeed;
    double partConsumedPower;
    int batterySlot;
    cout << "please enter action number:";
    getline(cin,prompt);
    if(prompt=="1")
    {
    cout << "Please enter part name:";
    getline(cin,choosePart);
    if(choosePart=="arm")
    {
        cout << "Please enter part name:";
        getline(cin,partNumber);
        cout << "please enter part description:";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cout << "please enter power_consumed:";
        cin >> partConsumed;
        Arm the_arm(choosePart,partNumber,partDiscription,partCost,partWeight,partConsumed);
    }
    else if(choosePart=="head")
    {
        cout << "Please enter part name:";
        getline(cin,partNumber);
        cout << "please enter part description:";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        Head the_head(choosePart,partNumber,partDiscription,partCost,partWeight);
    }
    else if(choosePart=="battery")
    {
        cout << "Please enter part name:";
        getline(cin,partNumber);
        cout << "please enter part description";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cout << "please enter energy value:";
        cin >> energyValue;
        cout << "please enter max power:";
        cin >> partMaxPower;
        Battery the_battery(choosePart,partNumber,partDiscription,partCost,partWeight,energyValue,partMaxPower);
    }
    else if(choosePart=="locomotor")
    {
        cout << "Please enter part name:";
        getline(cin,partNumber);
        cout << "please enter part description";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cout << "please enter max speed:";
        cin >> partMaxSpeed;
        cout << "please enter power consumed:";
        cin >> partConsumedPower;
        Locomotor the_locomotor(choosePart,partNumber,partDiscription,partCost,partWeight,partMaxSpeed,partConsumedPower);
    }
    else if(choosePart=="torso")
    {
        cout << "Please enter part name:";
        getline(cin,partNumber);
        cout << "please enter part description";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cout << "please enter batter compartments:";
        cin >> batterySlot;
        Torso the_torso(choosePart,partNumber,partDiscription,partCost,partWeight,batterySlot);
    }
    }
    return 0;
}

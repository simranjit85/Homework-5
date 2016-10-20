#include <iostream>
#include <string>
#include <vector>

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
       robot_part(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight)
       :robot_part_name(Robot_part_name),part_number(Part_number),discription(Discription),cost(Cost),weight(Weight){}
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
   };

    class Arm : public robot_part
    {
    private:
        double power_consumed;
        int number_of_arms;
    public:
        Arm(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight,double power_Consumed,int Number_of_arms)
        : robot_part(Robot_part_name,Part_number, Discription,Cost,Weight),number_of_arms(Number_of_arms){}
        double powerConsumed()
        {
            return power_consumed;
        }
        int no_of_arms()
        {
            return number_of_arms;
        }
        void arm_parts_details()
        {
            cout << "Part name:" << robot_part_name << endl;
            cout << "Part number:" << part_number << endl;
            cout << "Part description:" << discription << endl;
            cout << "Part cost:" << cost << endl;
            cout << "Part weight:" << weight << endl;
            cout << "Part power consumption:" << power_consumed << endl;
            cout << "number of arms:" << number_of_arms <<endl;
        }
    };
    class Head: public robot_part
    {
    private:
        string head;
    public:
        Head(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight)
        :robot_part(Robot_part_name,Part_number, Discription,Cost,Weight){}
        void head_parts_details()
        {
            cout << "Part name:" << robot_part_name << endl;
            cout << "Part number:" << part_number << endl;
            cout << "Part description:" << discription << endl;
            cout << "Part cost:" << cost << endl;
            cout << "Part weight:" << weight << endl;
        }
    };
    class Battery: public robot_part
    {
    private:
        double energy;
        double max_power;
    public:
         Battery(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight, double eNergy,double max_pOwer)
         : robot_part(Robot_part_name,Part_number, Discription,Cost,Weight),energy(eNergy),max_power(max_pOwer){}
        double batery_energy()
        {
            return energy;
        }
        double battery_max_power()
        {
            return max_power;
        }
        void battery_parts_details()
        {
            cout << "Part name:" << robot_part_name << endl;
            cout << "Part number:" << part_number << endl;
            cout << "Part description:" << discription << endl;
            cout << "Part cost:" << cost << endl;
            cout << "Part weight:" << weight << endl;
            cout << "Battery energy:" << energy << endl;
            cout << "Battery max_power:" << max_power << endl;
        }
    };
    class Locomotor: public robot_part
    {
    private:
        double max_speed;
        double consumed_power;
    public:
         Locomotor(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight,double mAx_speed,double cOnsumed_power)
        :robot_part(Robot_part_name,Part_number, Discription,Cost,Weight),max_speed(mAx_speed),consumed_power(cOnsumed_power){}
        double Max_speed()
        {
            return max_speed;
        }
        double Consumed_power()
        {
            return consumed_power;
        }
       void locomotor_parts_details()
        {
            cout << "Part name:" << robot_part_name << endl;
            cout << "Part number:" << part_number << endl;
            cout << "Part description:" << discription << endl;
            cout << "Part cost:" << cost << endl;
            cout << "Part weight:" << weight << endl;
            cout << "max speed:" << max_speed << endl;
            cout << "power consumed:" << consumed_power << endl;
        }
    };
    class Torso: public robot_part
    {
    private:
    int number_of_battery;
    public:
    Torso(string Robot_part_name,string Part_number,string Discription,double Cost,double Weight,int Number_of_battery)
    : robot_part(Robot_part_name,Part_number, Discription,Cost,Weight),number_of_battery(Number_of_battery){}
   void torso_parts_details()
    {
            cout << "Part name:" << robot_part_name << endl;
            cout << "Part number:" << part_number << endl;
            cout << "Part description:" << discription << endl;
            cout << "Part cost:" << cost << endl;
            cout << "Part weight:" << weight << endl;
            cout << "number of battery:" << number_of_battery << endl;
    }
    };
    class robotModel
    {
        private:
        string name_model;
        int number_model;
        double price_model;
        string track_status;
        public:
        robotModel(string Name_model,int Number_model,double Price_model,string Track_status)
        :name_model(Name_model),number_model(Number_model),price_model(Price_model),track_status(Track_status){}
        void change_status(string changed_value)
        {
            track_status=changed_value;
        }
        void model_details()
        {
            cout << "model name:" << name_model << endl;
            cout << "model number:" << number_model << endl;
            cout << "model price:" << price_model << endl;
            cout << "This model is:" << track_status << endl;
        }
    };
    class customer
    {
    private:
        string customer_name;
        string customer_number;
        double wallet;
    public:
        customer(string Customer_name,string Customer_number,double Wallet)
        :customer_name(Customer_name), customer_number(Customer_number),wallet(Wallet){}
         void enter_customer_details()
        {
            cout << "please enter customer name:";
            cin >> customer_name;
            cin.ignore();
            cout << "please enter customer number:";
            cin >> customer_number;
            cin.ignore();
            cout << "please enter wallet number:";
            cin >> wallet;
            cin.ignore();
            cout << endl;
        }
         void customer_record()
            {
                cout << endl;
                cout << "customer name:" << customer_name;
                cout << "   customer number:" << customer_number;
                cout << "   wallet number:" << wallet << endl;
            }
    };
    class sales_associate
    {
    private:
        string associate_name;
        int employee_ID;
    public:
        sales_associate(string Associate_name,int Employee_ID)
        :associate_name(Associate_name),employee_ID(Employee_ID){}
        void enter_associate_details()
        {
            cout << "please enter associate name:";
            cin >> associate_name;
            cout << "please enter employee ID:";
            cin >> employee_ID;
            cin.ignore();
        }
        void sales_associate_details()
        {
            cout << "associate name:" << associate_name;
            cout << "  employee ID:" << employee_ID << endl;
        }
    };
    class order
    {
    private:
        vector <customer> customer1;
        vector <sales_associate> sales_associate1;
        vector <robotModel> robotModel1;
        vector <Arm> Arm1;
        vector <Head> Head1;
        vector <Battery> Battery1;
        vector <Locomotor> Locomotor1;
        vector <Torso> Torso1;
        string model_name;
        int model_number;
        double price;
        string track_status_;
    public:
        void change_information(int quan)
        {
            robotModel1[quan].change_status("Unavailable");
        }
        void get_arm(Arm one)
        {
            Arm1.push_back(one);
        }
        void get_head(Head two)
        {
            Head1.push_back(two);
        }
        void get_battery(Battery three)
        {
            Battery1.push_back(three);
        }
        void get_locomotor(Locomotor four)
        {
            Locomotor1.push_back(four);
        }
        void get_torso(Torso five)
        {
            Torso1.push_back(five);
        }
        void get_robotModel(robotModel six)
        {
            robotModel1.push_back(six);
        }
        void get_customer_info(customer seven)
        {
            customer1.push_back(seven);
        }
        void get_associate_detail(sales_associate eight)
        {
            sales_associate1.push_back(eight);
        }
        void display_results()
        {
            for(unsigned int i=0;i<Arm1.size();i++)
        {
            cout << "Robot no " << i+1 << endl;
            cout << "-----------------------------------------" << endl;
            robotModel1[i].model_details();
            cout << "-----------------------------------------" << endl;
        }
        }
        void view_details(int num1)
        {
            Arm1[num1].arm_parts_details();
            cout << "-----------------------------------------" << endl;
            Head1[num1].head_parts_details();
            cout << "-----------------------------------------" << endl;
            Battery1[num1].battery_parts_details();
            cout << "-----------------------------------------" << endl;
            Locomotor1[num1].locomotor_parts_details();
            cout << "-----------------------------------------" << endl;
            Torso1[num1].torso_parts_details();
        }
        void select_robot(int selected_robot)
        {
            customer1[selected_robot].enter_customer_details();
            sales_associate1[selected_robot].enter_associate_details();
        }
        void view_order_history(int order_history)
        {
            customer1[order_history].customer_record();
            sales_associate1[order_history].sales_associate_details();
        }
    };
int main()
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
    string name_model;
    int number_model;
    double price_model;
    int arms_quantity;
    int batterySlot;
    order a;
    int view_robot;
    int enter_num;
    int robot_num;
    cout << "--------------------------------------------------------------------------------";
    cout << "                        Welcome to Robbie robot shop!" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "              Please create a complete robot model by pressing 1" << endl;
    cout << "         A complete robot includes arm,head,battery,locomotor and torso" << endl;
    cout << "  ----------------------------------------------------------------------------  " << endl;
    cout << " | please select an action from a menu below                                  |" << endl;
    cout << " | please press 1 when the system for the first time                          |" <<endl;
    cout << " | As a product manager(PM):please press 1 to create robot parts              |" << endl;
    cout << " | As a product manager(PM):please press 2 to define robot models             |" << endl;
    cout << " | As a beloved customer(BC):please press 3 to view robot models in the system|" << endl;
    cout << " | As a beloved customer(BC):please press 4 to view details of selected model |" << endl;
    cout << " | As a sales associate(SA):please press 5 to create order for a customer     |" << endl;
    cout << " | As either PM or SA:please press 6 to view history of sold robot models     |" <<endl;
    cout << " | please press 7 for help                                                    |" << endl;
    cout << endl;
    cout << "  ----------------------------------------------------------------------------  ";
    while(1)
    {
    cout << "please enter action number:";
    getline(cin,prompt);
    if(prompt=="1")
    {
    cout << "please start by typing (arm) in part name field to create robot's arm" <<endl;
    cout << "Please enter part name:";
    getline(cin,choosePart);
    //if(choosePart=="arm")
    //{
        cout << "Please enter part Number:";
        getline(cin,partNumber);
        cout << "please enter part description:";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cout << "please enter power_consumed:";
        cin >> partConsumed;
        cout << "please enter number of arms:";
        cin >> arms_quantity;
        cin.ignore();
        cout << "--------------------------------------------" << endl;
        Arm the_arm(choosePart,partNumber,partDiscription,partCost,partWeight,partConsumed,arms_quantity);
        a.get_arm(the_arm);
        cout << "Next type (head) in part name field to create robot's head" << endl;
    //}
    //else if(choosePart=="head")
    //{
        cout << "Please enter part name:";
        getline(cin,choosePart);
        cout << "Please enter part Number:";
        getline(cin,partNumber);
        cout << "please enter part description:";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cin.ignore();
        cout << "--------------------------------------------" << endl;
        Head the_head(choosePart,partNumber,partDiscription,partCost,partWeight);
        a.get_head(the_head);
        cout << "Next type (battery) in part name field to create robot's battery" << endl;
    //}
    //else if(choosePart=="battery")
    //{
        cout << "Please enter part name:";
        getline(cin,choosePart);
        cout << "Please enter part Number:";
        getline(cin,partNumber);
        cout << "please enter part description:";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cout << "please enter energy value:";
        cin >> energyValue;
        cout << "please enter max power:";
        cin >> partMaxPower;
        cin.ignore();
        cout << "--------------------------------------------" << endl;
        Battery the_battery(choosePart,partNumber,partDiscription,partCost,partWeight,energyValue,partMaxPower);
        a.get_battery(the_battery);
        cout << "Next type (locomotor) in part name field to create robot's locomotor" << endl;
    //}
    //else if(choosePart=="locomotor")
    //{
        cout << "Please enter part name:";
        getline(cin,choosePart);
        cout << "Please enter part Number:";
        getline(cin,partNumber);
        cout << "please enter part description:";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cout << "please enter max speed:";
        cin >> partMaxSpeed;
        cout << "please enter power consumed:";
        cin >> partConsumedPower;
        cin.ignore();
        cout << "--------------------------------------------" << endl;
        Locomotor the_locomotor(choosePart,partNumber,partDiscription,partCost,partWeight,partMaxSpeed,partConsumedPower);
        a.get_locomotor(the_locomotor);
        cout << "Finally type (torso) in part name field to create robot's torso" << endl;
    //}
    //else if(choosePart=="torso")
    //{
        cout << "Please enter part name:";
        getline(cin,choosePart);
        cout << "Please enter part Number:";
        getline(cin,partNumber);
        cout << "please enter part description:";
        getline(cin,partDiscription);
        cout << "please enter a cost:";
        cin >> partCost;
        cout << "please enter a weight:";
        cin >> partWeight;
        cout << "please enter batter compartments:";
        cin >> batterySlot;
        cin.ignore();
        cout << "--------------------------------------------" << endl;
        Torso the_torso(choosePart,partNumber,partDiscription,partCost,partWeight,batterySlot);
        a.get_torso(the_torso);
    //}
    }
    else if(prompt=="2")
    {
        cout << "please enter model name:";
        cin >> name_model;
        cout << "please enter model number:";
        cin >> number_model;
        cout << "please enter model price:";
        cin >> price_model;
        cin.ignore();
        cout << "--------------------------------------------" << endl;
        robotModel robotDiscription(name_model,number_model,price_model,"currently available");
        customer belowed_customer("No information","0",0);
        a.get_robotModel(robotDiscription);
        a.get_customer_info(belowed_customer);
        sales_associate belowed_associate("No information",0);
        a.get_associate_detail(belowed_associate);
    }
    else if (prompt=="3")
    {
        a.display_results();
    }
    else if(prompt=="4")
    {
        cout << "please enter robot number to view detail:";
        cin >> view_robot;
        cin.ignore();
        cout << "--------------------------------------------" << endl;
        a.view_details(view_robot-1);
    }
    else if (prompt=="5")
    {
        cout << "please enter the robot for checkout:";
        cin >> robot_num;
        cin.ignore();
        a.change_information(robot_num-1);
        a.select_robot(robot_num-1);
    }
    else if(prompt=="6")
    {
    cout << "please enter the sold robot number for more details:";
    cin >> enter_num;
    cin.ignore();
    a.view_order_history(enter_num-1);
    }
    else if (prompt=="7")
    {
    cout << "  ############################################################################" << endl;
    cout << " # As a product manager(PM):please press 1 to create robot parts              #" << endl;
    cout << " # As a product manager(PM):please press 2 to define robot models             #" << endl;
    cout << " # As a beloved customer(BC):please press 3 to view robot models in the system#" << endl;
    cout << " # As a beloved customer(BC):please press 4 to view details of selected model #" << endl;
    cout << " # As a sales associate(SA):please press 5 to create order for a customer     #" << endl;
    cout << " # As either PM or SA:please press 6 to view history of sold robot models     #" <<endl;
    cout << " # please press 7 for help                                                    #" << endl;
    cout << "  ############################################################################" <<endl;
    }
    }
    return 0;
}

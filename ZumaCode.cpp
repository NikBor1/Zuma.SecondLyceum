#include <iostream>
#include "DCListClass"

bool deleteThree(DNode* central);

int main()
{
    int allBals = 0;

    std::cout << "Enter, how many balls you want to begin with: ";
    std::cin >> allBalls;

    bool botMode = false;

    std::cout << "If you want to play yourself, enter 0, if you want the bot to play, enter 1: ";
    std::cin >> botMode;

    DNode* base = new DNode();

    *base.set_value(0);
    *base.set_next(base);
    *base.set_prev(base);

    DCList gameLine (base);

    )

    for(int i = 0; i < 20; i ++)
    {
        DNode* newElem = newDNode;

        *newElem.set_value((i / 3 + 3 * i ) % 4 + 1);

        *((gameLine.base()).get_next()).set_prev(newElem);
        *(gameLine.base()).set_next(newElem);
    }

    if(!botMode)
    {
        std::cout << "The game is begun!\n To make a turn enter an integer number of position from -5 to 5 (0 is cursor position) to add a new ball, which color number is printed on screen. \n ";
        std::cout << gameLine << std::endl;

        int ball = rand() % 4 + 1;

        std::cout << ball << std::endl;

        DNode* addition = new DNode

        int pos = 0;
        std::cin >> pos;

        if(pos == 0)
        {
            addition.set_prev((*(gameLine.base())).get_prev());
            addition.set_next(gameLine.base());
            (*((*(gameLine.base())).get_prev())).set_next(addition);
            (*(gameLine.base())).set_prev(addition);

        }

        DNode* nowAt = gameLine.head();



        if(pos > 0)
        {
            for(int i = 0; i < pos; i ++)
               nowAt = (*nowAt).get_next();

            addition.set_prev(nowAt);
            addition.set_next((*nowAt).get_next());
            (*((*nowAt).get_next())).set_prev(addition);
            (*nowAt)).set_next(addition);


        }

        if(pos < 0)
        {
            for(int i = 0; i > pos; i --)
               nowAt = (*nowAt).get_prev();

            addition.set_prev((*nowAt).get_prev());
            addition.set_next(nowAt);
            (*((*nowAt).get_prev())).set_next(addition);
            (*nowAt)).set_prev(addition);
        }



    }




    return 0;
}

bool deletThee(DNode* central)
{
    if((*((*central).get_next())).get_value() == central.get_value() && (*((*central).get_prev())).get_value() == central.get_value())
    {
        (*((*((*central).get_next())).get_next())).set_prev((*((*central).get_prev())).get_prev());
        (*((*((*central).get_prev())).get_prev())).set_next((*((*central).get_next())).get_next());

    }





}

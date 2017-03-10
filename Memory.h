/*----------------------------------------------------------------------------*/
/*-----------------------------------HW06-------------------------------------*/
/*---------------------------MUSTAFA BİNGÜL 141044077-------------------------*/
/*--------------------------------Memory.h------------------------------------*/
/*----------------------------------------------------------------------------*/
#ifndef MEMORY_H
#define MEMORY_H

class Memory {
    
    public:
        Memory();
        Memory(int opt);
        int getMem(int value);
        void setMem(int address, int value);
        void printAll();
        
    private:
        
        int memory[50];
        int option;
};

#endif
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

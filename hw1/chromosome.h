#ifndef CHM_H
#define CHM_H
#include<iostream>
using namespace std;

typedef enum Nucleic_Acid { Adenine,Cytosine,Guanine,Thymine,Nullin };
typedef enum Chromatid_Pos {SL,SR,BL,BR};


class Chromosome
{

    public://These are the methods required to be implemented
        Chromosome(Nucleic_Acid Seq_L[], Nucleic_Acid Seq_R[], int centromere);
        friend ostream& operator<<(ostream &out, Chromosome &C);

        void Deletion(Chromatid_Pos pos, int start, int finish);
        void Duplication(Chromatid_Pos pos, int start, int finish);
        void Inversion(Chromatid_Pos pos, int start, int finish);


        void Insertion(Chromatid_Pos source_pos, int start, int finish, int insertion_point);
        void Translocation(Chromatid_Pos pos1, int start1, int finish1, int start2, int finish2);

        int Sequence_Occurences(Nucleic_Acid Seq[]);



};
#endif

#include<iostream>
#include<stdexcept>
#include<map>
#include<vector>
using namespace std;
class Graph
{
    private:
        map<int, vector<int> >outgoing;
    public:
        Graph(const vector<int> &starts, const vector<int> &ends)
        {
            if( starts. size () != ends . size ())
            {
                throw invalid_argument (" diferente longitudes ");
            }
            for( int i = 0; i < starts . size (); i++ )
            {
                int start = starts [i], end = ends [i];
                outgoing [start].push_back(end);
            }
        }
        int numOutgoing(const int nodeID) const
        {
            return adjacent ( nodeID ). size ();
        }
        const vector<int> &adjacent(const int nodeID) const
        {
            map <int , vector <int > >:: const_iterator i = outgoing . find ( nodeID );
            if(i == outgoing . end ())
            {
                throw invalid_argument (" nodeid no existe");
            }
            return i-> second ;
        }
};


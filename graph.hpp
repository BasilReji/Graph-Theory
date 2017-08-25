#ifndef GRAPH_H__
#define GRAPH_H__
#include<iostream>

namespace mits{
	class BitMapMatrix{
		private:
			char* vbitmap;
			int nvertex;
		public:
			BitMapMatrix(){
			}
			
			BitMapMatrix(int nv);

			bool getBit(int i, int j);

			void setBit(int i, int j);

			void resetBit(int i, int j);

			void deleteEntry(int v);
	};
}
#endif

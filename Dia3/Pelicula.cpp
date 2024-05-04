#include <iostream>
#include <string>

using namespace std;

class Pelicula{
    private: 
        string titulo;
        string autor;
        int estreno;
    public:
        Pelicula(string tituloPeli, string autorPeli, int estrenoPeli){
            titulo = tituloPeli;
            autor = autorPeli;
            estreno = estrenoPeli;
        }
        string getTitulo(){
            return titulo;
        }
        string getAutor(){
            return autor;
        }
        int getEstreno(){
            return estreno;
        }
        void setTitulo(string tituloPeli){
            titulo = tituloPeli;
        }
        void setAutor(string autorPeli){
            autor = autorPeli;
        }
        void setEstreno(int estrenoPeli){
            estreno = estrenoPeli;
        }
};

int main(){
    cout << "Hoy tenemos en cartela la pelicula: " << endl;
    Pelicula cartela("El Padrino", "Francis Ford Coppola", 1972);
    cout << cartela.getTitulo() << " del autor " << cartela.getAutor() << " que se estrena este año " << cartela.getEstreno() << endl;
    string tituloCartela, autorCartela;
    int estrenoCartela;
    cin >> tituloCartela;
    cin >> autorCartela;
    cin >> estrenoCartela;
    cartela.setTitulo(tituloCartela);
    cartela.setAutor(autorCartela);
    cartela.setEstreno(estrenoCartela);
    cout << cartela.getTitulo() << " del autor " << cartela.getAutor() << " que se estrena este año " << cartela.getEstreno() << endl;
}
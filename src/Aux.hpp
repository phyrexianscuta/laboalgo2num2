template<class T>
vector<T> ordenar(vector<T> v){
    for(int i = 0; i < v.size()-1; i++){
        for(int j= i+1; j < v.size();j++){
            if(v[j] < v[i]){
                T min = v[j];
                v[j] = v[i];
                v[i] = min;
            }
        }
    }
    return v;
}

template<class T>
bool esPermutacionOrdenada(vector<T> v1, vector<T> v2) {
    if (v1.size() != v2.size())
        return false;

    if(v1.size()== 0)
        return true;

    if (v1[0] == v2[0]) {
        v1.erase(v1.begin());
        v2.erase(v2.begin());
        return esPermutacionOrdenada(v1, v2);
    }
    else{
        return false;
    }
}

template<class T>
bool esPermutacion(vector<T> v1, vector<T> v2){
    v1 = ordenar(v1);
    v2 = ordenar(v2);
    bool resp = esPermutacionOrdenada(v1,v2);
    return resp;
}
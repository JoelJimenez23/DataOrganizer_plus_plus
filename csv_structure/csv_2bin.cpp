#include <iostream>
#include <fstream>
#include <string>
#include "usefull_structs.hpp"
using namespace std;

Record Bin2Record(ifstream &file){
	char a = 'a';
	string _track_id,_track_name,_track_artist;
	string _lyrics;
	string _track_popularity;
	string _track_album_id,_track_album_name,_track_album_release_date;
	string _playlist_name,_playlist_id,_playlist_genre,_playlist_subgenre;
	string _danceability,_energy,_key,_loudness,_mode,_speechiness;
	string _acousticness,_instrumentalness,_liveness,_valence,_tempo;
	string _duration_ms;
	string _language;


	bool inQuotes = false;



	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_track_id.push_back(a);}
	}
	a = 'a';
	cout << "track id | " << _track_id << endl;
	
    while (file.read(reinterpret_cast<char*>(&a), sizeof(a))) {
        if (a == '"' && (_track_name.empty() || _track_name.back() != '\\')) {
            inQuotes = !inQuotes;
        } else if (a == ',' && !inQuotes) {
            break;
        } else {
            _track_name.push_back(a);
        }
    }
	a = 'a';
	cout << "track name |" << _track_name << endl;

    while (file.read(reinterpret_cast<char*>(&a), sizeof(a))) {
        if (a == '"' && (_track_artist.empty() || _track_artist.back() != '\\')) {
            inQuotes = !inQuotes;
        } else if (a == ',' && !inQuotes) {
            break;
        } else {
            _track_artist.push_back(a);
        }
    }
	a = 'a';
	cout << "track_artist |" << _track_artist << endl;
	
    while (file.read(reinterpret_cast<char*>(&a), sizeof(a))) {
        if (a == '"' && (_lyrics.empty() || _lyrics.back() != '\\')) {
            inQuotes = !inQuotes;
        } else if (a == ',' && !inQuotes) {
            break;
        } else {
            _lyrics.push_back(a);
        }
    }
	a = 'a';
	cout << "lyrics \n" << endl << _lyrics << endl <<endl;
	
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_track_popularity.push_back(a);}
	}
	a = 'a';
	cout << "track popularity | " <<_track_popularity << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_track_album_id.push_back(a);}
	}
	a = 'a';
	cout << "track album id | "<< _track_album_id << endl;
	inQuotes = false;
    while (file.read(reinterpret_cast<char*>(&a), sizeof(a))) {
        if (a == '"' && (_track_album_name.empty() || _track_album_name.back() != '\\')) {
            inQuotes = !inQuotes;
        } else if (a == ',' && !inQuotes) {
            break;
        } else {
            _track_album_name.push_back(a);
        }
    }
	a = 'a';
	cout << "track album name | "<<_track_album_name << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_track_album_release_date.push_back(a);}
	}
	a = 'a';
	cout << "track_album_release_date | " << _track_album_release_date << endl;

	inQuotes = false;
    while (file.read(reinterpret_cast<char*>(&a), sizeof(a))) {
        if (a == '"' && (_playlist_name.empty() || _playlist_name.back() != '\\')) {
            inQuotes = !inQuotes;
        } else if (a == ',' && !inQuotes) {
            break;
        } else {
            _playlist_name.push_back(a);
        }
    }
	a = 'a';
	cout << "playlist_name | " << _playlist_name << endl;

	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_playlist_id.push_back(a);}
	}

	a = 'a';
	cout << "playlist id | " <<_playlist_id << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_playlist_genre.push_back(a);}
	}
	cout << "playlist genre | " << _playlist_genre << endl;
	a = 'a';
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_playlist_subgenre.push_back(a);}
	}
	a = 'a';
	cout << "playlist subgenre | " <<_playlist_subgenre << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_danceability.push_back(a);}
	}
	a = 'a';
	cout << "danceability | " << _danceability << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_energy.push_back(a);}
	}
	cout << "energy | " << _energy << endl;
	a = 'a';
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_key.push_back(a);}
	}
	a = 'a';
	cout << "key | " << _key << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_loudness.push_back(a);}
	}
	a = 'a';
	cout << "loudness | " << _loudness << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_mode.push_back(a);}
	}
	a = 'a';
	cout << "mode | " << _mode << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_speechiness.push_back(a);}
	}
	a  = 'a';
	cout << "speechiness |" <<_speechiness << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_acousticness.push_back(a);}
	}
	a = 'a';
	cout << "acousticness | "<<_acousticness << endl;
	while(a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_instrumentalness.push_back(a);}
	}
	cout << "instrumentals | "<<_instrumentalness  << endl;
	a = 'a';
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_liveness.push_back(a);}
	}
	a = 'a';
	cout << "liveness | "<<_liveness << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_valence.push_back(a);}
	}
	a = 'a';
	cout << "valence | " <<  _valence << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_tempo.push_back(a);}
	}
	a = 'a';
	cout << "tempo | " <<_tempo << endl;
	while (a != ','){
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		if(a != ','){_duration_ms.push_back(a);}
	}
	a = 'a';
	cout << "duration_ms |" <<_duration_ms << endl;
	while (a != '\n'){
		if(file.eof()){cout << "n";break;}
		file.read(reinterpret_cast<char*>(&a),sizeof(a));
		_language.push_back(a);
	}
	cout << "language |"<< _language << endl;
	
	double track_popularity = stod(_track_popularity);
	double danceability = stod(_danceability);
	double energy = stod(_energy);
	double key = stod(_key);
	double loudness = stod(_loudness);
	double mode = stod(_mode);
	double speechiness = stod(_speechiness);
	double acousticness = stod(_acousticness);
	double instrumentalness = stod(_instrumentalness);
	double liveness = stod(_liveness);
	double valence = stod(_valence);
	double tempo = stod(_tempo);
	double duration_ms = stod(_duration_ms);




	array<char,22> track_id,track_album_id,playlist_id;
	for(int i=0;i<22;i++){
		track_id[i] = _track_id[i];
		track_album_id[i] = _track_album_id[i];
		playlist_id[i] = _playlist_id[i];
	}

	array<char,123> track_name  = {""};
	for(int i=0;i<_track_name.size();i++){
		track_name[i] = _track_name[i];
	}
	array<char,51> track_artist = {""};
	for(int i=0;i<_track_artist.size();i++){
		track_artist[i] = _track_artist[i];
	}
	array<char,28000> lyrics = {""};
	for(int i=0;i<_lyrics.size();i++){
		lyrics[i] = _lyrics[i];
	}

	array<char,151> track_album_name = {""};
	for (int i=0;i<_track_album_name.size();i++){
		track_album_name[i] = _track_album_name[i];
	}
	array<char,10> track_album_release_date = {""};
	for (int i=0;i<_track_album_release_date.size();i++){
		track_album_release_date[i] = _track_album_release_date[i];
	}
	array<char,120> playlist_name = {""};
	for (int i=0;i<_playlist_name.size();i++){
		playlist_name[i] = _playlist_name[i];
	}
	array<char,5> playlist_genre = {""};
	for(int i=0;i<_playlist_genre.size();i++){
		playlist_genre[i] = _playlist_genre[i];
	}
	array<char,25> playlist_subgenre = {""};
	for (int i=0;i<_playlist_subgenre.size();i++){
		playlist_subgenre[i] = _playlist_subgenre[i];
	}
	array<char,3> language = {""};
	for(int i=0;i<_language.size();i++){
		language[i] = _language[i];
	}


	Record record;
	record.track_id = track_id;
	record.track_name = track_name;
	record.track_artist = track_artist;
	record.lyrics = lyrics;
	record.track_popularity = track_popularity;
	record.track_album_id = track_album_id;
	record.track_album_name = track_album_name;
	record.track_album_release_date = track_album_release_date;
	record.playlist_name = playlist_name;
	record.playlist_id = playlist_id;
	record.playlist_genre = playlist_genre;
	record.playlist_subgenre = playlist_subgenre;
	record.danceability = danceability;
	record.energy = energy;
	record.key = key;
	record.loudness = loudness;
	record.mode = mode;
	record.speechiness = speechiness;
	record.acousticness = acousticness;
	record.liveness = liveness;
	record.tempo = tempo;
	record.duration_ms = duration_ms;
	record.language = language;

	return record;
}

void insert_csv(string csv){
	ifstream file(csv,ios::binary);
	ofstream file1("spotify.dat",ios::binary);

	Record record;
	file.seekg(0,ios::end);
	int end = file.tellg();
	file.seekg(0);

	char a = 'a';
	while(a != '\n'){file.read(reinterpret_cast<char*>(&a),sizeof(a));}
	
	cout << "\n\n";

	while(true){
		record = Bin2Record(file);
		cout << "\n";
		file1.write(reinterpret_cast<char*>(&record),sizeof(Record));
		if (file.tellg() == end){break;}
	}
}



int main(){
	insert_csv("../spotify_songs.csv");
	return 0;
}

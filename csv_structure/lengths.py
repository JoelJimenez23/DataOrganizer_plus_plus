import pandas as pd

df = pd.read_csv("../spotify_songs.csv")
variables = []
for i in df:
    max_length = max([len(str(j)) for j in df[i]])
    variables.append((i,max_length))


for i in variables:
    print(i,df[i[0]][0])



#track_popularity int
#danceability 0.682
#energy 0.401
#key 2

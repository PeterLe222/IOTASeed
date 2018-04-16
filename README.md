# IOTASeed

# Generating a random 81 character seed using only A-Z and the number 9

# There are options to generate IOTA seed: 

# Matlab
% IOTA seed includes upperletter from A-Z and number 9
inputSeed = ['A':'Z' '9'];

% Count the length of inputSeed 
arraySeed = numel(inputSeed);

% Genertate random intergers from 1 to 27 into 81 positions 
SeedGeneration = randi(arraySeed, [1 81]);

% Show the letters and number 9 from inputSeed based on random numbers
% 1-27 which generated from SeedGeneration
generateSeed = inputSeed(SeedGeneration)

#Linux 
cat /dev/urandom |tr -dc A-Z9|head -c${1:-81} 

#Mac 
cat /dev/urandom |LC_ALL=C tr -dc 'A-Z9' | fold -w 81 | head -n 1 

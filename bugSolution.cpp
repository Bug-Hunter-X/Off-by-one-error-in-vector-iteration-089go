std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) { // Corrected: Loop stops before accessing vec[vec.size()]
    std::cout << vec[i] << " ";
}

std::cout << std::endl;
 vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double far = celsius*1.80+32.00;

        vector <double> v;
        v.push_back(kelvin);
        v.push_back(far);

        return v;
    }

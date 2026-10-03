# Iris Dataset - KNN Machine Learning
# Using StandardScaler + KNN + Confusion Matrix


# 1. Import required libraries
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix


# 2. Load the Iris dataset
iris = load_iris()

# X = input features
# y = target/output
X = iris.data
y = iris.target


# 3. Split the dataset into training and testing data
X_train, X_test, y_train, y_test = train_test_split(
    X,
    y,
    test_size=0.2,
    random_state=42
)


# 4. Create a StandardScaler
scaler = StandardScaler()


# 5. Scale the training data
X_train = scaler.fit_transform(X_train)


# 6. Scale the testing data
X_test = scaler.transform(X_test)


# 7. Create the KNN model
# n_neighbors=5 means the model looks at
# the 5 nearest data points
model = KNeighborsClassifier(n_neighbors=5)


# 8. Train the model
model.fit(X_train, y_train)


# 9. Make predictions using the test data
y_pred = model.predict(X_test)


# 10. Calculate accuracy
accuracy = accuracy_score(y_test, y_pred)

print("Accuracy:", accuracy)


# 11. Create the Confusion Matrix
cm = confusion_matrix(y_test, y_pred)

print("\nConfusion Matrix:")
print(cm)


# 12. Display detailed classification results
print("\nClassification Report:")

print(classification_report(
    y_test,
    y_pred,
    target_names=iris.target_names
))


# 13. Predict a completely new flower
# [sepal length, sepal width, petal length, petal width]
new_flower = [[5.1, 3.5, 1.4, 0.2]]


# 14. Scale the new flower using the SAME scaler
new_flower_scaled = scaler.transform(new_flower)


# 15. Predict the flower species
prediction = model.predict(new_flower_scaled)


# 16. Display the predicted species
print(
    "Predicted flower:",
    iris.target_names[prediction][0]
)
## What is ML
- ML is the process of training a piece of software, called a **model**, to make useful predictions using a data set. This predictive model can then serve up predictions about previously unseen data. 
	- eg. the system predicts that a user will like a certain video, so the system recommends that video to the user.
- **Model**: The representation of what a machine learning system has learned from the training data. It defines the relationship between features and label. We can think of model as a function whose input is the features and the output is label.
- ML problems falls along a spectrum of supervision between **supervised** and **unsupervised** learning.
	- Supervised learning is a type of ML where the model is provided with **labeled** training data containing features and a label.
		- Features are variables that describe our data, the label is essentially the answer of ML problem or what a particular set of feature should predict or the output variable.
		- In **supervised machine learning**, one feed the features and their corresponding labels into an algorithm in a process called **training**. During training, the algorithm gradually determines the relationship between features and their corresponding labels. This relationship is called the **model**.
		- Supervised machine learning finds patterns between data and labels that can be expressed mathematically as functions.
	- An **example** is a particular instance of data, **x**. (We put **x** in boldface to indicate that it is a vector.) We break examples into two categories:
		-   labeled examples: A **labeled example** includes both feature(s) and the label, used for training our model.
		-   unlabeled examples: An **unlabeled example** contains features but not the label, for testing our model.
	- **Training** means creating or **learning** the model.
	- **Inference** means applying the trained model to unlabeled examples. 
	- In **unsupervised learning**, the goal is to identify meaningful patterns in the data. To accomplish this, the machine must learn from an unlabeled data set. 
		- The model has no hints how to categorize each piece of data and must infer its own rules for doing so.
		- This is helpful when working with unstructured data or where we want the model to find patterns.
		- **Clustering** is typically done when labeled data is not available. This is an _unsupervised_ learning problem.

## What is RL
- Reinforcement learning is an active field of ML research.
- In RL one don't collect examples with labels. 
	- Imagine you want to teach a machine to play a very basic video game and never lose. You set up the model (often called an **agent** in RL) with the game, and you tell the model not to get a "game over" screen. 
- During training, the agent receives a reward when it performs this task, which is called a **reward function**. With reinforcement learning, the agent can learn very quickly how to outperform humans.
- Designing a good reward function is difficult, and RL models are less stable and predictable than supervised approaches.

## Classifying ML problems
![[Pasted image 20211104193814.png]]

- Main Supervised Learning models are:
	- A **regression** model predicts continuous values.
	- A **classification** model predicts discrete values.

## ML mindset
- Machine Learning changes the way you think about a problem. The focus shifts from a mathematical science to a natural science, **running experiments and using statistics**, not logic, to analyse its results.
- ML help programmer
	- To reduce the time programming
	- Customise and scale some products easily
	- Help us do problems that seem unprogrammable.
	- Changes the way a software engineer think about a problem.
- For a Good ML problem ask yourself these questions: 
	1.  What problem is my product facing?
	2.  Would it be a good problem for ML?
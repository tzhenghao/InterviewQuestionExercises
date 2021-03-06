// Zheng Hao Tan
// Date: 10/21/2013

// Question:

// Write a method removeDuplicates that takes as a parameter a sorted 
// ArrayList of Strings and that eliminates any duplicates from the list. 
// For example, suppose that a variable called list contains the following values: 
// {"be", "be", "is", "not", "or", "question", "that", "the", "to", "to"} 
// After calling removeDuplicates(list); the list should store the following values: 
// {"be", "is", "not", "or", "question", "that", "the", "to"}

// Because the values will be sorted, all of the duplicates will be grouped together.

public class removeDuplicates {

	public static void main (String [] args) {
	
		ArrayList<String>list = new ArrayList("king", "king2", "king3");
				
		System.out.println("The list before : " + list);

		removingDuplicates(list);
		
		System.out.println("The list after : " + list);
	}

	public static void removingDuplicates(ArrayList<String> list)
	{
	    for (int i = 0; i < list.size() -1; i++)
	    {
	        if (list.get(i) == list.get(i + 1))
	        {
	            list.remove(i + 1);
	            i--;
	        }
	    }
	}
}

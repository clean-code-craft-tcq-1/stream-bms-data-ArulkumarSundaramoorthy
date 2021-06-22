package receiver;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class ReceiverMainService {
	public static void main(String[] args) {

		BufferedReader inputData = new BufferedReader(new InputStreamReader(System.in));
		String arg;
		List<String> argsList = new ArrayList<String>();

		try {
			while ((arg = inputData.readLine()) != null) {
				System.out.println(arg);
				argsList.add(arg);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}

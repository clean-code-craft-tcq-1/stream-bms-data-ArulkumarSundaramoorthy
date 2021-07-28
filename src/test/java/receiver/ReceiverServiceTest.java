package receiver;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.junit.Before;
import org.junit.Test;

import receiver.model.ResponseModel;

public class ReceiverServiceTest {

	List<ResponseModel> response = new ArrayList<ResponseModel>();
	
	@Before
	public void setup() {
		ResponseModel responseData = new ResponseModel();
		responseData.setTemperature(70.6F);
		responseData.setSOC(039.4F);
		response.add(responseData);
		responseData.setTemperature(067.5F);
		responseData.setSOC(079.8F);
		response.add(responseData);
		responseData.setTemperature(000.3F);
		responseData.setSOC(076.8F);
		response.add(responseData);
		responseData.setTemperature(021.6F);
		responseData.setSOC(062.9F);
		response.add(responseData);
		responseData.setTemperature(045.4F);
		responseData.setSOC(071.7F);
		response.add(responseData);
		
	}
	
	@Test
	public void nullCheck() {
		assertFalse(ReceiverService.minMaxAvgTemp(null));
		assertFalse(ReceiverService.minMaxAvgSOC(null));
	}
	
	@Test
	public void checkMinMaxAvgTemp() {
		assertTrue(ReceiverService.minMaxAvgTemp(response));
	}

	@Test
	public void checkMinMaxAvgSoc() {
		assertTrue(ReceiverService.minMaxAvgSOC(response));
	}
	
}
